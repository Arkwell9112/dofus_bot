#ifndef PARTYINVITATIONARENAREQUESTMESSAGE_H
#define PARTYINVITATIONARENAREQUESTMESSAGE_H

#include "PartyInvitationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationArenaRequestMessage : public PartyInvitationRequestMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif