#include "TaxCollectorErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void TaxCollectorErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
}
