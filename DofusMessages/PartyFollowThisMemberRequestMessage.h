#ifndef PARTYFOLLOWTHISMEMBERREQUESTMESSAGE_H
#define PARTYFOLLOWTHISMEMBERREQUESTMESSAGE_H

#include "PartyFollowMemberRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyFollowThisMemberRequestMessage : public PartyFollowMemberRequestMessage {
public:
    bool enabled = false;

    void deserialize(CustomDataInput *input);

private:
    void _enabledFunc(CustomDataInput *input);
};

#endif