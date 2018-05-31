#ifndef INLINEQUERYRESULTCACHEDGIF_H
#define INLINEQUERYRESULTCACHEDGIF_H

#include "inlinequeryresult.h"

namespace Telegram
{
    class InlineQueryResultCachedGif : public InlineQueryResult
    {
    public:
        InlineQueryResultCachedGif();
        InlineQueryResultCachedGif(QJsonObject obj);
        
        //Getters/Setters
        QString getGifFileId() const;
        void setGifFileId(const QString &value);
        
        QString getTitle() const;
        void setTitle(const QString &value);
        
        QString getCaption() const;
        void setCaption(const QString &value);
        
        QString getParseMode() const;
        void setParseMode(const QString &value);
        
        //Flag getters
        bool hasGifFileId() const;
        
        bool hasTitle() const;
        
        bool hasCaption() const;
        
        bool hasParseMode() const;
        
    private:
        QString gifFileId;
        QString title;
        QString caption;
        QString parseMode;
        
        //Flags
        bool _hasGifFileId;
        bool _hasTitle;
        bool _hasCaption;
        bool _hasParseMode;
    };
}
#endif // INLINEQUERYRESULTCACHEDGIF_H
