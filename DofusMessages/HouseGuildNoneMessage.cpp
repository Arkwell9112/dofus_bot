#include "HouseGuildNoneMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseGuildNoneMessage::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
}

void HouseGuildNoneMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseGuildNoneMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseGuildNoneMessage::_secondHandFunc(CustomDataInput *input) {
    this->secondHand = input->readBoolean();
}
