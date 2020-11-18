#include "LockableStateUpdateHouseDoorMessage.h"
#include "LockableStateUpdateAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LockableStateUpdateHouseDoorMessage::deserialize(CustomDataInput *input) {
    LockableStateUpdateAbstractMessage::deserialize(input);
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
}

void LockableStateUpdateHouseDoorMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void LockableStateUpdateHouseDoorMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void LockableStateUpdateHouseDoorMessage::_secondHandFunc(CustomDataInput *input) {
    this->secondHand = input->readBoolean();
}
