#include "TeleportRequestMessage.h"
#include "HouseTeleportRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseTeleportRequestMessage::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_houseInstanceIdFunc(input);
}

void HouseTeleportRequestMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseTeleportRequestMessage::_houseInstanceIdFunc(CustomDataInput *input) {
    this->houseInstanceId = input->readInt();
    if (this->houseInstanceId < 0) {

    }
}
