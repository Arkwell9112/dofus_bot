#ifndef PARTYINVITATIONCANCELLEDFORGUESTMESSAGE_H
#define PARTYINVITATIONCANCELLEDFORGUESTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyInvitationCancelledForGuestMessage : public AbstractPartyMessage {
public:
    double cancelerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cancelerIdFunc(CustomDataInput *input);
};

#endif