#include "ExchangeObjectUseInWorkshopMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectUseInWorkshopMessage::deserialize(CustomDataInput *input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ExchangeObjectUseInWorkshopMessage::_objectUIDFunc(CustomDataInput *input) {
    this->objectUID = input->readVarUhInt();
    if (this->objectUID < 0) {

    }
}

void ExchangeObjectUseInWorkshopMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarInt();
}
