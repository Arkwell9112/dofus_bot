#ifndef PARTYACCEPTINVITATIONMESSAGE_H
#define PARTYACCEPTINVITATIONMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyAcceptInvitationMessage : public AbstractPartyMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif