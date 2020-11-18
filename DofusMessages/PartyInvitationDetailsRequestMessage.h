#ifndef PARTYINVITATIONDETAILSREQUESTMESSAGE_H
#define PARTYINVITATIONDETAILSREQUESTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationDetailsRequestMessage : public AbstractPartyMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif