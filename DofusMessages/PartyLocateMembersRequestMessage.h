#ifndef PARTYLOCATEMEMBERSREQUESTMESSAGE_H
#define PARTYLOCATEMEMBERSREQUESTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyLocateMembersRequestMessage : public AbstractPartyMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif