#include "PrismFightRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightRemovedMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
}

void PrismFightRemovedMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
