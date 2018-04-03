#include "include/inlinequeryresultcachedsticker.h"

using namespace TarnaBot;
InlineQueryResultCachedSticker::InlineQueryResultCachedSticker()
{
    
}

InlineQueryResultCachedSticker::InlineQueryResultCachedSticker(QJsonObject obj) : InlineQueryResult::InlineQueryResult(obj)
{
    stickerFileId = root["sticker_file_id"].toString();
}

QString InlineQueryResultCachedSticker::getStickerFileId() const
{
    return stickerFileId;
}

void InlineQueryResultCachedSticker::setStickerFileId(const QString &value)
{
    stickerFileId = value;
}

bool InlineQueryResultCachedSticker::getHasStickerFileId() const
{
    return hasStickerFileId;
}
