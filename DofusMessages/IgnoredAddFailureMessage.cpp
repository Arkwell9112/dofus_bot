#include "IgnoredAddFailureMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IgnoredAddFailureMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void IgnoredAddFailureMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
