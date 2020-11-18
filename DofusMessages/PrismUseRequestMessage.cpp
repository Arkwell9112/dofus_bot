#include "PrismUseRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismUseRequestMessage::deserialize(CustomDataInput *input) {
    this->_moduleToUseFunc(input);
}

void PrismUseRequestMessage::_moduleToUseFunc(CustomDataInput *input) {
    this->moduleToUse = input->readByte();
    if (this->moduleToUse < 0) {

    }
}
