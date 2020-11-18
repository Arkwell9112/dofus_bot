#include "HouseGuildShareRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseGuildShareRequestMessage::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_enableFunc(input);
    this->_rightsFunc(input);
}

void HouseGuildShareRequestMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseGuildShareRequestMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseGuildShareRequestMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}

void HouseGuildShareRequestMessage::_rightsFunc(CustomDataInput *input) {
    this->rights = input->readVarUhInt();
    if (this->rights < 0) {

    }
}
