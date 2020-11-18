#include "FriendsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FriendInformations.h"

void FriendsListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    FriendInformations _item1;
    unsigned int _friendsListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _friendsListLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<FriendInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->friendsList.push_back(_item1);
    }
}

void FriendsListMessage::_friendsListFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    FriendInformations _item;
    _item.deserialize(input);
    this->friendsList.push_back(_item);
}
