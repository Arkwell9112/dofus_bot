#ifndef FRIENDSPOUSEFOLLOWWITHCOMPASSREQUESTMESSAGE_H
#define FRIENDSPOUSEFOLLOWWITHCOMPASSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendSpouseFollowWithCompassRequestMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif