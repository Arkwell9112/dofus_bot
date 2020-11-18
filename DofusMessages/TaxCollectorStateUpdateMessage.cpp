#include "TaxCollectorStateUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorStateUpdateMessage::deserialize(CustomDataInput *input) {
    this->_uniqueIdFunc(input);
    this->_stateFunc(input);
}

void TaxCollectorStateUpdateMessage::_uniqueIdFunc(CustomDataInput *input) {
    this->uniqueId = input->readDouble();
    if (this->uniqueId < 0 || this->uniqueId > 9007199254740990) {

    }
}

void TaxCollectorStateUpdateMessage::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
}
