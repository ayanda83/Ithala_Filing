#ifndef FILEMODEL_H
#define FILEMODEL_H

#include <QFileSystemModel>
#include <QMap>
#include <QIcon>
#include <QList>
#include <QVariant>
#include <QString>
#include <QDebug>

class FileModel : public QFileSystemModel
{
public:
    FileModel();
    void loadFilesToModel();
private:
    QList<QList<QVariant> > fileData;
    QString root_path;
};

#endif // FILEMODEL_H
