#include "include/shippingaddress.h"

using namespace TarnaBot;
ShippingAddress::ShippingAddress()
{
    
}

ShippingAddress::ShippingAddress(QJsonObject obj)
{
    root = obj;
    
    countryCode = root["country_code"].toString();
    hasCountryCode = true;
    state = root["state"].toString();
    hasState = true;
    city = root["city"].toString();
    hasCity = true;
    streetLine1 = root["street_line1"].toString();
    hasStreetLine1 = true;
    streetLine2 = root["street_line2"].toString();
    hasStreetLine2 = true;
    postCode = root["post_code"].toString();
    hasPostCode = true;
}

ShippingAddress ShippingAddress::fromObject(QJsonObject obj)
{
    return ShippingAddress(obj);
}

//Getters/Setters
QString ShippingAddress::getCountryCode() const
{
    return countryCode;
}

void ShippingAddress::setCountryCode(const QString &value)
{
    countryCode = value;
    root["country_code"] = countryCode;
    hasCountryCode = true;
}

QString ShippingAddress::getState() const
{
    return state;
}

void ShippingAddress::setState(const QString &value)
{
    state = value;
    root["state"] = state;
    hasState = true;
}

QString ShippingAddress::getCity() const
{
    return city;
}

void ShippingAddress::setCity(const QString &value)
{
    city = value;
    root["city"] = city;
    hasCity = true;
}

QString ShippingAddress::getStreetLine1() const
{
    return streetLine1;
}

void ShippingAddress::setStreetLine1(const QString &value)
{
    streetLine1 = value;
    root["street_line1"] = streetLine1;
    hasStreetLine1 = true;
}

QString ShippingAddress::getStreetLine2() const
{
    return streetLine2;
}

void ShippingAddress::setStreetLine2(const QString &value)
{
    streetLine2 = value;
    hasStreetLine2 = true;
    root["street_line2"] = streetLine2;
}

QString ShippingAddress::getPostCode() const
{
    return postCode;
}

void ShippingAddress::setPostCode(const QString &value)
{
    postCode = value;
    root["post_code"] = postCode;
    hasPostCode = true;
}

bool ShippingAddress::getHasCountryCode() const
{
    return hasCountryCode;
}

bool ShippingAddress::getHasState() const
{
    return hasState;
}

bool ShippingAddress::getHasCity() const
{
    return hasCity;
}

bool ShippingAddress::getHasStreetLine1() const
{
    return hasStreetLine1;
}

bool ShippingAddress::getHasStreetLine2() const
{
    return hasStreetLine2;
}

bool ShippingAddress::getHasPostCode() const
{
    return hasPostCode;
}
