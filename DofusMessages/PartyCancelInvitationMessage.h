#ifndef PARTYCANCELINVITATIONMESSAGE_H
#define PARTYCANCELINVITATIONMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyCancelInvitationMessage : public AbstractPartyMessage {
public:
    double guestId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guestIdFunc(CustomDataInput *input);
};

#endif