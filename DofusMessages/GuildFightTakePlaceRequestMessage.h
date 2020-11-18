#ifndef GUILDFIGHTTAKEPLACEREQUESTMESSAGE_H
#define GUILDFIGHTTAKEPLACEREQUESTMESSAGE_H

#include "GuildFightJoinRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildFightTakePlaceRequestMessage : public GuildFightJoinRequestMessage {
public:
    int replacedCharacterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _replacedCharacterIdFunc(CustomDataInput *input);
};

#endif