#ifndef FRIENDADDEDMESSAGE_H
#define FRIENDADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendInformations.h"

#include <string>
#include <vector>

class FriendAddedMessage : public DeserializeInterface {
public:
    FriendInformations friendAdded;

    void deserialize(CustomDataInput *input);

private:
};

#endif