#ifndef CHOSENINLINERESULT_H
#define CHOSENINLINERESULT_H

#include <QString>

#include "tarnaobject.h"
#include "user.h"
#include "location.h"


class ChosenInlineResult : public TarnaObject
{
public:
    ChosenInlineResult();
    ChosenInlineResult(QJsonObject obj);
    
    static ChosenInlineResult fromObject(QJsonObject obj);
    
    //Getters/Setters
    QString getResultId() const;
    void setResultId(const QString &value);
    
    QString getInlineMessageId() const;
    void setInlineMessageId(const QString &value);
    
    QString getQuery() const;
    void setQuery(const QString &value);
    
    User getFrom() const;
    void setFrom(const User &value);
    
    Location getLocation() const;
    void setLocation(const Location &value);
    
private:
    QString resultId;
    QString inlineMessageId;
    QString query;
    
    User from;
    Location location;
};

#endif // CHOSENINLINERESULT_H
