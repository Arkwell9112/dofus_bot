#ifndef GAMEACTIONFIGHTLIFEPOINTSLOSTMESSAGE_H
#define GAMEACTIONFIGHTLIFEPOINTSLOSTMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightLifePointsLostMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int loss = 0;
    unsigned int permanentDamages = 0;
    int elementId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _lossFunc(CustomDataInput *input);

    void _permanentDamagesFunc(CustomDataInput *input);

    void _elementIdFunc(CustomDataInput *input);
};

#endif