#include "include/forcereply.h"

ForceReply::ForceReply(QJsonObject obj)
{
    root = obj;
    forceReply = root["force_reply"].toBool();
    
    if(root.contains("selective"))
        selective = root["selective"].toBool();
}

ForceReply::ForceReply()
{
    
}

ForceReply ForceReply::fromObject(QJsonObject obj)
{
    return ForceReply(obj);
}

QJsonObject ForceReply::toObject()
{
    return root;
}

void ForceReply::refresh()
{
    root["force_reply"] = forceReply;
    root["selective"] = selective;
}

//Getters/setters
bool ForceReply::getForceReply() const
{
    return forceReply;
}

void ForceReply::setForceReply(bool value)
{
    forceReply = value;
}

bool ForceReply::getSelective() const
{
    return selective;
}

void ForceReply::setSelective(bool value)
{
    selective = value;
}
