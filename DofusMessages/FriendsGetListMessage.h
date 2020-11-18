#ifndef FRIENDSGETLISTMESSAGE_H
#define FRIENDSGETLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendsGetListMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif