#include "GuildHouseRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildHouseRemoveMessage::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
}

void GuildHouseRemoveMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void GuildHouseRemoveMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void GuildHouseRemoveMessage::_secondHandFunc(CustomDataInput *input) {
    this->secondHand = input->readBoolean();
}
