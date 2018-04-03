#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <QString>
#include <QVariant>

#include "tarnaobject.h"
#include "photosize.h"

namespace TarnaBot
{
    class Document : public TarnaObject
    {
    public:
        Document(QJsonObject obj);
        Document();
        
        static Document fromObject(QJsonObject obj);
        
        //Getters/setters
        QString getFileId() const;
        void setFileId(const QString &value);
        
        QString getFileName() const;
        void setFileName(const QString &value);
        
        QString getMimeType() const;
        void setMimeType(const QString &value);
        
        qint64 getFileSize() const;
        void setFileSize(const qint64 &value);
        
        PhotoSize getThumb() const;
        void setThumb(const PhotoSize &value);
        
        //Flag getters
        bool getHasFileId() const;
        
        bool getHasFileName() const;
        
        bool getHasMimeType() const;
        
        bool getHasFileSize() const;
        
        bool getHasThumb() const;
        
    private:
        QString fileId;
        QString fileName;
        QString mimeType;
        
        qint64 fileSize;
        
        PhotoSize thumb;
        
        //flags
        bool hasFileId;
        bool hasFileName;
        bool hasMimeType;
        bool hasFileSize;
        bool hasThumb;
    };
}

#endif // DOCUMENT_H
