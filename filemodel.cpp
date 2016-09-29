#include "filemodel.h"

FileModel::FileModel()
{
    root_path = ":/Contract_Documents/";
    this->setRootPath(root_path);

    if(rootPath().isNull())
        qDebug() << "Not a valid path";
    else
        qDebug() << "Is a Valid path";

}

void FileModel::loadFilesToModel()
{
    QStringList filters;
    filters << "*.pdf" << "*.doc" << "*.docx";


    QDir dir(root_path);
    //dir.setNameFilters(filters);

    dir.entryList();

    for(int i=0; i <= this->rootDirectory().count(); i++)
    {
        QModelIndex index = this->index(root_path, 0);
        //this->setData(index, rootPath().data());
    }

}
