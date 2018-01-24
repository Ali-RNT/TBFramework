#ifndef CALLBACKGAME_H
#define CALLBACKGAME_H

#include "tarnaobject.h"

class CallbackGame : public TarnaObject
{
public:
    CallbackGame();
    CallbackGame(QJsonObject obj);
    
    static CallbackGame fromObject(QJsonObject obj);
};

#endif // CALLBACKGAME_H
