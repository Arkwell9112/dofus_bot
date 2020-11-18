#ifndef CHATCOMMUNITYCHANNELSETCOMMUNITYREQUESTMESSAGE_H
#define CHATCOMMUNITYCHANNELSETCOMMUNITYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatCommunityChannelSetCommunityRequestMessage : public DeserializeInterface {
public:
    int communityId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _communityIdFunc(CustomDataInput *input);
};

#endif