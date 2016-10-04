#include "resourcemanager.h"

ResourceManager::ResourceManager(QWidget *parent) :
	QListWidget(parent)
{
	setAcceptDrops(true);

}

void ResourceManager::dropEvent(QDropEvent *event)
{
	if (event->mimeData()->hasUrls()) {
		urls = event->mimeData()->urls();
		//this->clear();
		fileStr.clear();
		foreach(QUrl url, urls) {
			//qDebug() << url.toLocalFile();
			QDir dir(url.toLocalFile());
			auto dirList = dir.entryList();
			// Detect file or folder
			if (dirList.isEmpty()){
				this->addItem(new QListWidgetItem(QIcon(":/fileIcon.png"), url.toLocalFile()));
				// store the absolute path for the dropped file
				fileStr << url.toLocalFile();

			}
			//else {
			//	foreach(QString fileList, dirList) {
			//		this->addItem(new QListWidgetItem(QIcon(":/fileIcon.png"), fileList));
			//		// store the absolute path for every file under the dropped folder 
			//		fileStr << url.toLocalFile() + "/" + fileList;
			//	}
			//}
		}
	}
}

void ResourceManager::dragEnterEvent(QDragEnterEvent *event)
{
	event->accept();
}

void ResourceManager::dragMoveEvent(QDragMoveEvent *event) // it is essential for list widget, even if it does not do anything
{

}

