#ifndef GAMEROLEPLAYDELAYEDOBJECTUSEMESSAGE_H
#define GAMEROLEPLAYDELAYEDOBJECTUSEMESSAGE_H

#include "ObjectUseMessage.h"
#include "GameRolePlayDelayedActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayDelayedObjectUseMessage : public GameRolePlayDelayedActionMessage {
public:
    unsigned int objectGID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectGIDFunc(CustomDataInput *input);
};

#endif