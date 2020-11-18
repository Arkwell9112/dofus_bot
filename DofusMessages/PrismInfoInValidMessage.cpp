#include "PrismInfoInValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismInfoInValidMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void PrismInfoInValidMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
