#include "include/photosize.h"

using namespace TarnaBot;
PhotoSize::PhotoSize(QJsonObject obj)
{
    root = obj;
    
    fileId = root["file_id"].toString();
    width = root["width"].toInt();
    height = root["height"].toInt();
    
    if (root.contains("file_size"))
        fileSize = root["file_size"].toVariant().toLongLong();
}

PhotoSize::PhotoSize()
{
    
}

PhotoSize PhotoSize::fromObject(QJsonObject obj)
{
    return PhotoSize(obj);
}

//Getters/Setters
QString PhotoSize::getFileId() const
{
    return fileId;
}

void PhotoSize::setFileId(const QString &value)
{
    fileId = value;
    root["file_id"] = fileId;
}

int PhotoSize::getWidth() const
{
    return width;
}

void PhotoSize::setWidth(int value)
{
    width = value;
    root["width"] = width;
}

int PhotoSize::getHeight() const
{
    return height;
}

void PhotoSize::setHeight(int value)
{
    height = value;
    root["height"] = height;
}

qint64 PhotoSize::getFileSize() const
{
    return fileSize;
}

void PhotoSize::setFileSize(qint64 &value)
{
    fileSize = value;
    root["file_size"] = fileSize;
}

bool PhotoSize::getHasFileId() const
{
    return hasFileId;
}

bool PhotoSize::getHasWidth() const
{
    return hasWidth;
}

bool PhotoSize::getHasHeight() const
{
    return hasHeight;
}

bool PhotoSize::getHasFileSize() const
{
    return hasFileSize;
}
