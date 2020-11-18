#include "FriendAddFailureMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendAddFailureMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void FriendAddFailureMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
