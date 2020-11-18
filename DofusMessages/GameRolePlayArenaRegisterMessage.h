#ifndef GAMEROLEPLAYARENAREGISTERMESSAGE_H
#define GAMEROLEPLAYARENAREGISTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaRegisterMessage : public DeserializeInterface {
public:
    unsigned int battleMode = 3;

    void deserialize(CustomDataInput *input);

private:
    void _battleModeFunc(CustomDataInput *input);
};

#endif