#ifndef PARTYFOLLOWMEMBERREQUESTMESSAGE_H
#define PARTYFOLLOWMEMBERREQUESTMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyFollowMemberRequestMessage : public AbstractPartyMessage {
public:
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);
};

#endif