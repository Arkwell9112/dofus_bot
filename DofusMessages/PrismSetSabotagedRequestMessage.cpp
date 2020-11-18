#include "PrismSetSabotagedRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismSetSabotagedRequestMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
}

void PrismSetSabotagedRequestMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
