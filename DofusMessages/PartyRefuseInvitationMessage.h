#ifndef PARTYREFUSEINVITATIONMESSAGE_H
#define PARTYREFUSEINVITATIONMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyRefuseInvitationMessage : public AbstractPartyMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif