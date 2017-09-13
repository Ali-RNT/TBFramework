#include "include/document.h"

Document::Document(QJsonObject obj)
{
    root = obj;
    bool ok = false;
    
    fileId = root["file_id"].toString();
    
    //Optional types
    if (root.contains("file_name"))
        fileName = root["file_name"].toString();
    
    if (root.contains("mime_type"))
        mimeType = root["mime_type"].toString();
    
    if (root.contains("file_size"))
        fileSize = root["file_size"].toVariant().toLongLong(&ok);
    
    if (root.contains("thumb"))
        thumb = PhotoSize::fromObject(root["thumb"].toObject());
}

Document::Document()
{
    
}

Document Document::fromObject(QJsonObject obj)
{
    return Document(obj);
}

QJsonObject Document::toObject()
{
    return root;
}

void Document::refresh()
{
    root["file_id"] = fileId;
    root["file_name"] = fileName;
    root["mime_type"] = mimeType;
    
    root["file_size"] = fileSize;
    
    root["thumb"] = thumb.toObject();
}

//Getters/setters
QString Document::getFileId() const
{
    return fileId;
}

void Document::setFileId(const QString &value)
{
    fileId = value;
}

QString Document::getFileName() const
{
    return fileName;
}

void Document::setFileName(const QString &value)
{
    fileName = value;
}

QString Document::getMimeType() const
{
    return mimeType;
}

void Document::setMimeType(const QString &value)
{
    mimeType = value;
}

qint64 Document::getFileSize() const
{
    return fileSize;
}

void Document::setFileSize(const qint64 &value)
{
    fileSize = value;
}

PhotoSize Document::getThumb() const
{
    return thumb;
}

void Document::setThumb(const PhotoSize &value)
{
    thumb = value;
}
