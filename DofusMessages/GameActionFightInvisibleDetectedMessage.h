#ifndef GAMEACTIONFIGHTINVISIBLEDETECTEDMESSAGE_H
#define GAMEACTIONFIGHTINVISIBLEDETECTEDMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightInvisibleDetectedMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _cellIdFunc(CustomDataInput *input);
};

#endif