#ifndef PARTYINVITATIONDUNGEONMESSAGE_H
#define PARTYINVITATIONDUNGEONMESSAGE_H

#include "PartyInvitationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationDungeonMessage : public PartyInvitationMessage {
public:
    unsigned int dungeonId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);
};

#endif