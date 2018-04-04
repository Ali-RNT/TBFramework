#ifndef MESSAGEENTITY_H
#define MESSAGEENTITY_H

#include <QString>
#include <QVariant>

#include "tarnaobject.h"
#include "user.h"

namespace Telegram
{
    class MessageEntity : public TarnaObject
    {
    public:
        MessageEntity(QJsonObject obj);
        MessageEntity();
        static MessageEntity fromObject(QJsonObject obj);
        
        //Getters/Setters
        qint64 getOffset() const;
        void setOffset(const qint64 &value);
        
        qint64 getLength() const;
        void setLength(const qint64 &value);
        
        QString getType() const;
        void setType(const QString &value);
        
        QString getUrl() const;
        void setUrl(const QString &value);
        
        User getUser() const;
        void setUser(const User &value);
        
        //Flag getters
        bool getHasOffset() const;
        
        bool getHasLenght() const;
        
        bool getHasType() const;
        
        bool getHasUrl() const;
        
        bool getHasUser() const;
        
    private:
        qint64 offset;
        qint64 length;
        
        QString type;
        QString url;
        
        User user;
        
        //Flags
        bool hasOffset;
        bool hasLenght;
        bool hasType;
        bool hasUrl;
        bool hasUser;
    };
}
#endif // MESSAGEENTITY_H
