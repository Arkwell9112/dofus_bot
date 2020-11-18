#include "PrismFightSwapRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightSwapRequestMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_targetIdFunc(input);
}

void PrismFightSwapRequestMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismFightSwapRequestMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readVarUhLong();
    if (this->targetId < 0 || this->targetId > 9007199254740990) {

    }
}
