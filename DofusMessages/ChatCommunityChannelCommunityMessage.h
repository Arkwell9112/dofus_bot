#ifndef CHATCOMMUNITYCHANNELCOMMUNITYMESSAGE_H
#define CHATCOMMUNITYCHANNELCOMMUNITYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ChatCommunityChannelCommunityMessage : public DeserializeInterface {
public:
    int communityId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _communityIdFunc(CustomDataInput *input);
};

#endif