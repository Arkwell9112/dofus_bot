#include "GuestLimitationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuestLimitationMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void GuestLimitationMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
