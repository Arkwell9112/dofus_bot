#ifndef GUILDPADDOCKTELEPORTREQUESTMESSAGE_H
#define GUILDPADDOCKTELEPORTREQUESTMESSAGE_H

#include "TeleportRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildPaddockTeleportRequestMessage : public DeserializeInterface {
public:
    double paddockId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _paddockIdFunc(CustomDataInput *input);
};

#endif