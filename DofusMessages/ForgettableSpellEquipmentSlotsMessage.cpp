#include "ForgettableSpellEquipmentSlotsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ForgettableSpellEquipmentSlotsMessage::deserialize(CustomDataInput *input) {
    this->_quantityFunc(input);
}

void ForgettableSpellEquipmentSlotsMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarShort();
}
