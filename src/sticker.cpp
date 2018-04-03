#include "include/sticker.h"

using namespace TarnaBot;
Sticker::Sticker(QJsonObject obj)
{
    root = obj;
    
    fileId = root["file_id"].toString();
    width = root["width"].toVariant().toLongLong();
    height = root["height"].toVariant().toLongLong();
    
    //Optional types
    if(root.contains("thumb"))
        thumb = PhotoSize::fromObject(root["thumb"].toObject());
    
    if(root.contains("mask_position"))
        maskPosition = MaskPosition::fromObject(root["mask_position"].toObject());
    
    if(root.contains("emoji"))
        emoji = root["emoji"].toString();
    
    if(root.contains("set_name"))
        setName = root["set_name"].toString();
    
    if(root.contains("file_size"))
        fileSize = root["file_size"].toVariant().toLongLong();
}

Sticker::Sticker()
{
    
}

Sticker Sticker::fromObject(QJsonObject obj)
{
    return Sticker(obj);
}

//Getters/setters
QString Sticker::getFileId() const
{
    return fileId;
}

void Sticker::setFileId(const QString &value)
{
    fileId = value;
    root["file_id"] = fileId;
}

QString Sticker::getEmoji() const
{
    return emoji;
}

void Sticker::setEmoji(const QString &value)
{
    emoji = value;
    root["emoji"] = emoji;
}

QString Sticker::getSetName() const
{
    return setName;
}

void Sticker::setSetName(const QString &value)
{
    setName = value;
    root["set_name"] = setName;
}

qint64 Sticker::getWidth() const
{
    return width;
}

void Sticker::setWidth(const qint64 &value)
{
    width = value;
    root["width"] = width;
}

qint64 Sticker::getHeight() const
{
    return height;
}

void Sticker::setHeight(const qint64 &value)
{
    height = value;
    root["height"] = height;
}

qint64 Sticker::getFileSize() const
{
    return fileSize;
}

void Sticker::setFileSize(const qint64 &value)
{
    fileSize = value;
    root["file_size"] = fileSize;
}

PhotoSize Sticker::getThumb() const
{
    return thumb;
}

void Sticker::setThumb(const PhotoSize &value)
{
    thumb = value;
    root["thumb"] = thumb.toObject();
}

MaskPosition Sticker::getMaskPosition() const
{
    return maskPosition;
}

void Sticker::setMaskPosition(const MaskPosition &value)
{
    maskPosition = value;
    root["mask_position"] = maskPosition.toObject();
}

bool Sticker::getHasFileId() const
{
    return hasFileId;
}

bool Sticker::getHasEmoji() const
{
    return hasEmoji;
}

bool Sticker::getHasSetName() const
{
    return hasSetName;
}

bool Sticker::getHasWidth() const
{
    return hasWidth;
}

bool Sticker::getHasHeight() const
{
    return hasHeight;
}

bool Sticker::getHasFileSize() const
{
    return hasFileSize;
}

bool Sticker::getHasThumb() const
{
    return hasThumb;
}

bool Sticker::getHasMaskPosition() const
{
    return hasMaskPosition;
}
