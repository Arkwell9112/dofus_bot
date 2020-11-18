#include "OrnamentSelectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void OrnamentSelectErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void OrnamentSelectErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
