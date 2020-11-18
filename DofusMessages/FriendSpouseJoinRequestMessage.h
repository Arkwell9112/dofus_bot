#ifndef FRIENDSPOUSEJOINREQUESTMESSAGE_H
#define FRIENDSPOUSEJOINREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendSpouseJoinRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif