#include "ObtainedItemMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void ObtainedItemMessage::deserialize(CustomDataInput *input) {
    this->_genericIdFunc(input);
    this->_baseQuantityFunc(input);
}

void ObtainedItemMessage::_genericIdFunc(CustomDataInput *input) {
    this->genericId = input->readVarUhShort();
    if (this->genericId < 0) {

    }
}

void ObtainedItemMessage::_baseQuantityFunc(CustomDataInput *input) {
    this->baseQuantity = input->readVarUhInt();
    if (this->baseQuantity < 0) {

    }
}
