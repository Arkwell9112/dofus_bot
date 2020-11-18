#include "ContactAddFailureMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ContactAddFailureMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void ContactAddFailureMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
