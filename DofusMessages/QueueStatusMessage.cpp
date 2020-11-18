#include "QueueStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QueueStatusMessage::deserialize(CustomDataInput *input) {
    this->_positionFunc(input);
    this->_totalFunc(input);
}

void QueueStatusMessage::_positionFunc(CustomDataInput *input) {
    this->position = input->readUnsignedShort();
    if (this->position < 0 || this->position > 65535) {

    }
}

void QueueStatusMessage::_totalFunc(CustomDataInput *input) {
    this->total = input->readUnsignedShort();
    if (this->total < 0 || this->total > 65535) {

    }
}
