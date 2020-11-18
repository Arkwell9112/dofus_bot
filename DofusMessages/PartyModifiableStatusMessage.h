#ifndef PARTYMODIFIABLESTATUSMESSAGE_H
#define PARTYMODIFIABLESTATUSMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyModifiableStatusMessage : public AbstractPartyMessage {
public:
    bool enabled = false;

    void deserialize(CustomDataInput *input);

private:
    void _enabledFunc(CustomDataInput *input);
};

#endif