#ifndef INPUTCONTACTMESSAGECONTENT_H
#define INPUTCONTACTMESSAGECONTENT_H

#include <QString>

#include "inputmessagecontent.h"

class InputContactMessageContent : InputMessageContent
{
public:
    InputContactMessageContent();
    InputContactMessageContent(QJsonObject obj);
    
    static InputContactMessageContent fromObject(QJsonObject);
    
    //Getters/Setters
    QString getPhoneNumber() const;
    void setPhoneNumber(const QString &value);
    
    QString getFirstName() const;
    void setFirstName(const QString &value);
    
    QString getLastName() const;
    void setLastName(const QString &value);
    
private:
    QString phoneNumber;
    QString firstName;
    QString lastName;
};

#endif // INPUTCONTACTMESSAGECONTENT_H
