#include "PrismSetSabotagedRefusedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismSetSabotagedRefusedMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_reasonFunc(input);
}

void PrismSetSabotagedRefusedMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismSetSabotagedRefusedMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
}
