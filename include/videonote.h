#ifndef VIDEONOTE_H
#define VIDEONOTE_H

#include <QVariant>
#include <QString>

#include "tarnaobject.h"
#include "photosize.h"

namespace TarnaBot
{
    class VideoNote : public TarnaObject
    {
    public:
        VideoNote(QJsonObject obj);
        VideoNote();
        
        static VideoNote fromObject(QJsonObject obj);
        
        //Getters/Setters
        QString getFileId() const;
        void setFileId(const QString &value);
        
        qint64 getLength() const;
        void setLength(const qint64 &value);
        
        qint64 getDuration() const;
        void setDuration(const qint64 &value);
        
        qint64 getFileSize() const;
        void setFileSize(const qint64 &value);
        
        PhotoSize getThumb() const;
        void setThumb(const PhotoSize &value);
        
        //Flag getters
        bool getHasFileId() const;
        
        bool getHasLength() const;
        
        bool getHasDuration() const;
        
        bool getHasFileSize() const;
        
        bool getHasThumb() const;
        
    private:
        QString fileId;
        
        qint64 length;
        qint64 duration;
        qint64 fileSize;
        
        PhotoSize thumb;
        
        //Flags
        bool hasFileId;
        bool hasLength;
        bool hasDuration;
        bool hasFileSize;
        bool hasThumb;
    };
}
#endif // VIDEONOTE_H
