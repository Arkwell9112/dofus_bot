#ifndef GAMEROLEPLAYFREESOULREQUESTMESSAGE_H
#define GAMEROLEPLAYFREESOULREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayFreeSoulRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif