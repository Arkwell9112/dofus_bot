#ifndef PARTYREFUSEINVITATIONNOTIFICATIONMESSAGE_H
#define PARTYREFUSEINVITATIONNOTIFICATIONMESSAGE_H

#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyRefuseInvitationNotificationMessage : public AbstractPartyEventMessage {
public:
    double guestId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guestIdFunc(CustomDataInput *input);
};

#endif