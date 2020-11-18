#include "LockableStateUpdateStorageMessage.h"
#include "LockableStateUpdateAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LockableStateUpdateStorageMessage::deserialize(CustomDataInput *input) {
    LockableStateUpdateAbstractMessage::deserialize(input);
    this->_mapIdFunc(input);
    this->_elementIdFunc(input);
}

void LockableStateUpdateStorageMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void LockableStateUpdateStorageMessage::_elementIdFunc(CustomDataInput *input) {
    this->elementId = input->readVarUhInt();
    if (this->elementId < 0) {

    }
}
