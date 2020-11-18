#ifndef FRIENDJOINREQUESTMESSAGE_H
#define FRIENDJOINREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendJoinRequestMessage : public DeserializeInterface {
public:
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);
};

#endif