#ifndef GAMEROLEPLAYTAXCOLLECTORFIGHTREQUESTMESSAGE_H
#define GAMEROLEPLAYTAXCOLLECTORFIGHTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayTaxCollectorFightRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif