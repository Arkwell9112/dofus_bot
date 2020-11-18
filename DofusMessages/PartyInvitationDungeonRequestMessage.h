#ifndef PARTYINVITATIONDUNGEONREQUESTMESSAGE_H
#define PARTYINVITATIONDUNGEONREQUESTMESSAGE_H

#include "PartyInvitationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationDungeonRequestMessage : public PartyInvitationRequestMessage {
public:
    unsigned int dungeonId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);
};

#endif