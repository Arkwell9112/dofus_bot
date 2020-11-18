#ifndef PARTYCANCELINVITATIONNOTIFICATIONMESSAGE_H
#define PARTYCANCELINVITATIONNOTIFICATIONMESSAGE_H

#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyCancelInvitationNotificationMessage : public AbstractPartyEventMessage {
public:
    double cancelerId = 0;
    double guestId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cancelerIdFunc(CustomDataInput *input);

    void _guestIdFunc(CustomDataInput *input);
};

#endif