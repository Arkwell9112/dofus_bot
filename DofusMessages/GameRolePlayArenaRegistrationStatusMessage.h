#ifndef GAMEROLEPLAYARENAREGISTRATIONSTATUSMESSAGE_H
#define GAMEROLEPLAYARENAREGISTRATIONSTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaRegistrationStatusMessage : public DeserializeInterface {
public:
    bool registered = false;
    unsigned int step = 0;
    unsigned int battleMode = 3;

    void deserialize(CustomDataInput *input);

private:
    void _registeredFunc(CustomDataInput *input);

    void _stepFunc(CustomDataInput *input);

    void _battleModeFunc(CustomDataInput *input);
};

#endif