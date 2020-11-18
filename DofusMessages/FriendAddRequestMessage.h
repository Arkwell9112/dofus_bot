#ifndef FRIENDADDREQUESTMESSAGE_H
#define FRIENDADDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendAddRequestMessage : public DeserializeInterface {
public:
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);
};

#endif