/**
  Note: Setters are for development purposes only.
  */
#ifndef UPDATE_H
#define UPDATE_H

#include <QVariant>

#include "tarnaobject.h"
#include "message.h"
#include "callbackquery.h"
#include "shippingquery.h"
#include "precheckoutquery.h"
#include "inlinequery.h"
#include "choseninlineresult.h"

class Update : public TarnaObject
{
public:
    Update(QJsonObject obj);
    Update();
    
    static Update fromObject(QJsonObject obj);
    
    //Getters/Setters
    qint64 getUpdateId() const;
    void setUpdateId(const qint64 &value);
    
    Message getMessage() const;
    void setMessage(const Message &value);
    
    Message getEditedMessage() const;
    void setEditedMessage(const Message &value);
    
    Message getChannelPost() const;
    void setChannelPost(const Message &value);
    
    Message getEditedChannelPost() const;
    void setEditedChannelPost(const Message &value);
    
    InlineQuery getInlineQuery() const;
    void setInlineQuery(const InlineQuery &value);
    
    ChosenInlineResult getChosenInlineResult() const;
    void setChosenInlineResult(const ChosenInlineResult &value);
    
    CallbackQuery getCallbackQuery() const;
    void setCallbackQuery(const CallbackQuery &value);
    
    ShippingQuery getShippingQuery() const;
    void setShippingQuery(const ShippingQuery &value);
    
    PreCheckoutQuery getPreCheckoutQuery() const;
    void setPreCheckoutQuery(const PreCheckoutQuery &value);
    
    //Public flags
    bool hasUpdateId = false;
    bool hasMessage = false;
    bool hasEditedMessage = false;
    bool hasChannelPost = false;
    bool hasEditedChannelPost = false;
    bool hasInlineQuery = false;
    bool hasChosenInlineResult = false;
    bool hasCallbackQuery = false;
    bool hasShippingQuery = false;
    bool hasPrecheckoutQuery = false;
private:
    qint64 updateId;
    
    Message message;
    Message editedMessage;
    Message channelPost;
    Message editedChannelPost;
    
    InlineQuery inlineQuery;
    ChosenInlineResult chosenInlineResult;
    CallbackQuery callbackQuery;
    ShippingQuery shippingQuery;
    PreCheckoutQuery preCheckoutQuery;
};

#endif //UPDATE_H
