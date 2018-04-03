#ifndef FILE_H
#define FILE_H

#include <QString>
#include <QVariant>

#include "tarnaobject.h"

namespace TarnaBot
{
    class File : public TarnaObject
    {
    public:
        File(QJsonObject obj);
        File();
        
        static File fromObject(QJsonObject obj);
    
        //Getters/setters
        QString getFileId() const;
        void setFileId(const QString &value);
        
        QString getFilePath() const;
        void setFilePath(const QString &value);
        
        qint64 getFileSize() const;
        void setFileSize(const qint64 &value);
        
        //Public flags
        bool hasFileId = false;
        bool hasFilePath = false;
        bool hasFileSize = false;
        
    private:
        QString fileId;
        QString filePath;
        qint64 fileSize;
    };
}
#endif // FILE_H
