#ifndef PARTYLOYALTYSTATUSMESSAGE_H
#define PARTYLOYALTYSTATUSMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyLoyaltyStatusMessage : public AbstractPartyMessage {
public:
    bool loyal = false;

    void deserialize(CustomDataInput *input);

private:
    void _loyalFunc(CustomDataInput *input);
};

#endif