#include "HouseGuildRightsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseGuildRightsMessage::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->guildInfo.deserialize(input);
    this->_rightsFunc(input);
}

void HouseGuildRightsMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseGuildRightsMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseGuildRightsMessage::_secondHandFunc(CustomDataInput *input) {
    this->secondHand = input->readBoolean();
}

void HouseGuildRightsMessage::_rightsFunc(CustomDataInput *input) {
    this->rights = input->readVarUhInt();
    if (this->rights < 0) {

    }
}
