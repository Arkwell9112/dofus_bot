#include "FriendDeleteRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendDeleteRequestMessage::deserialize(CustomDataInput *input) {
    this->_accountIdFunc(input);
}

void FriendDeleteRequestMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}
