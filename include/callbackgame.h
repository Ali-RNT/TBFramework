#ifndef CALLBACKGAME_H
#define CALLBACKGAME_H

#include "tarnaobject.h"
namespace Telegram
{
    class CallbackGame : public TarnaObject
    {
    public:
        CallbackGame();
        CallbackGame(QJsonObject obj);
    };
}
#endif // CALLBACKGAME_H
