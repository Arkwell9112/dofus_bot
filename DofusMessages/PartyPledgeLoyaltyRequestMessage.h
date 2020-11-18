#ifndef PARTYPLEDGELOYALTYREQUESTMESSAGE_H
#define PARTYPLEDGELOYALTYREQUESTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyPledgeLoyaltyRequestMessage : public AbstractPartyMessage {
public:
    bool loyal = false;

    void deserialize(CustomDataInput *input);

private:
    void _loyalFunc(CustomDataInput *input);
};

#endif