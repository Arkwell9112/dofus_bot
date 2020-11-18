#ifndef FRIENDSLISTMESSAGE_H
#define FRIENDSLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendInformations.h"

#include <string>
#include <vector>

class FriendsListMessage : public DeserializeInterface {
public:
    std::vector<FriendInformations> friendsList;

    void deserialize(CustomDataInput *input);

private:
    void _friendsListFunc(CustomDataInput *input);
};

#endif