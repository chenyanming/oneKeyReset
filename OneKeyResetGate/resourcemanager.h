#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <QListWidget>
#include <QObject>
#include <QDropEvent>
#include <QUrl>
#include <QDebug>
#include <QMimeData> 
#include <QDir> 
#include <QFile>

class ResourceManager : public QListWidget
{
	Q_OBJECT

public:
	ResourceManager(QWidget * = NULL);

private:
	QList<QUrl> urls;
	QStringList fileStr;

protected:
	void dropEvent(QDropEvent *event);
	void dragEnterEvent(QDragEnterEvent *event);
	void dragMoveEvent(QDragMoveEvent *event);

public slots:
	
signals:
	void sendToInput(QString, QString);

};

#endif // RESOURCEMANAGER_H
