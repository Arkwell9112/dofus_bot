#include "HouseGuildRightsViewMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseGuildRightsViewMessage::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
}

void HouseGuildRightsViewMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseGuildRightsViewMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}
