#include "IdentificationFailedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdentificationFailedMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void IdentificationFailedMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
