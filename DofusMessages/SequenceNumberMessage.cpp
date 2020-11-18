#include "SequenceNumberMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SequenceNumberMessage::deserialize(CustomDataInput *input) {
    this->_numberFunc(input);
}

void SequenceNumberMessage::_numberFunc(CustomDataInput *input) {
    this->number = input->readUnsignedShort();
    if (this->number < 0 || this->number > 65535) {

    }
}
