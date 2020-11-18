#ifndef GAMEROLEPLAYARENAUNREGISTERMESSAGE_H
#define GAMEROLEPLAYARENAUNREGISTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaUnregisterMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif