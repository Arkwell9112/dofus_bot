#ifndef PARTYFOLLOWSTATUSUPDATEMESSAGE_H
#define PARTYFOLLOWSTATUSUPDATEMESSAGE_H

#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyFollowStatusUpdateMessage : public AbstractPartyMessage {
public:
    bool success = false;
    bool isFollowed = false;
    double followedId = 0;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _followedIdFunc(CustomDataInput *input);
};

#endif