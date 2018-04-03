#ifndef SHIPPINGADDRESS_H
#define SHIPPINGADDRESS_H

#include <QString>

#include "tarnaobject.h"

namespace TarnaBot
{
    class ShippingAddress : public TarnaObject
    {
    public:
        ShippingAddress();
        ShippingAddress(QJsonObject obj);
        
        static ShippingAddress fromObject(QJsonObject obj);
        
        //Getters/Setters
        QString getCountryCode() const;
        void setCountryCode(const QString &value);
        
        QString getState() const;
        void setState(const QString &value);
        
        QString getCity() const;
        void setCity(const QString &value);
        
        QString getStreetLine1() const;
        void setStreetLine1(const QString &value);
        
        QString getStreetLine2() const;
        void setStreetLine2(const QString &value);
        
        QString getPostCode() const;
        void setPostCode(const QString &value);
        
        //Flag getters
        bool getHasCountryCode() const;
        
        bool getHasState() const;
        
        bool getHasCity() const;
        
        bool getHasStreetLine1() const;
        
        bool getHasStreetLine2() const;
        
        bool getHasPostCode() const;
        
    private:
        QString countryCode;
        QString state;
        QString city;
        QString streetLine1;
        QString streetLine2;
        QString postCode;
        
        //Flags
        bool hasCountryCode;
        bool hasState;
        bool hasCity;
        bool hasStreetLine1;
        bool hasStreetLine2;
        bool hasPostCode;
    };
}
#endif // SHIPPINGADDRESS_H
