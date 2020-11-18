#ifndef GAMEROLEPLAYGAMEOVERMESSAGE_H
#define GAMEROLEPLAYGAMEOVERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayGameOverMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif