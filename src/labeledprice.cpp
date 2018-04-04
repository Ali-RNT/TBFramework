#include "include/labeledprice.h"

using namespace Telegram;
LabeledPrice::LabeledPrice()
{
    
}

LabeledPrice::LabeledPrice(QJsonObject obj) : TarnaObject::TarnaObject(obj)
{
    label = root["label"].toString();
    hasLabel = true;
    amount = root["amount"].toVariant().toInt();
    hasAmount = true;
}

//Getters/Setters
QString LabeledPrice::getLabel() const
{
    return label;
}

void LabeledPrice::setLabel(const QString &value)
{
    label = value;
    root["label"] = label;
    hasLabel = true;
}

int LabeledPrice::getAmount() const
{
    return amount;
}

void LabeledPrice::setAmount(int value)
{
    amount = value;
    root["amount"] = amount;
    hasAmount = true;
}

bool LabeledPrice::getHasLabel() const
{
    return hasLabel;
}

bool LabeledPrice::getHasAmount() const
{
    return hasAmount;
}

