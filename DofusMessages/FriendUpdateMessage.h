#ifndef FRIENDUPDATEMESSAGE_H
#define FRIENDUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendInformations.h"

#include <string>
#include <vector>

class FriendUpdateMessage : public DeserializeInterface {
public:
    FriendInformations friendUpdated;

    void deserialize(CustomDataInput *input);

private:
};

#endif