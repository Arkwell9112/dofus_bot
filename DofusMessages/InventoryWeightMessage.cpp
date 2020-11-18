#include "InventoryWeightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InventoryWeightMessage::deserialize(CustomDataInput *input) {
    this->_inventoryWeightFunc(input);
    this->_shopWeightFunc(input);
    this->_weightMaxFunc(input);
}

void InventoryWeightMessage::_inventoryWeightFunc(CustomDataInput *input) {
    this->inventoryWeight = input->readVarUhInt();
    if (this->inventoryWeight < 0) {

    }
}

void InventoryWeightMessage::_shopWeightFunc(CustomDataInput *input) {
    this->shopWeight = input->readVarUhInt();
    if (this->shopWeight < 0) {

    }
}

void InventoryWeightMessage::_weightMaxFunc(CustomDataInput *input) {
    this->weightMax = input->readVarUhInt();
    if (this->weightMax < 0) {

    }
}
