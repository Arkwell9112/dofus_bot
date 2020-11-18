#ifndef PARTYRESTRICTEDMESSAGE_H
#define PARTYRESTRICTEDMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyRestrictedMessage : public AbstractPartyMessage {
public:
    bool restricted = false;

    void deserialize(CustomDataInput *input);

private:
    void _restrictedFunc(CustomDataInput *input);
};

#endif