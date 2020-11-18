#include "LockableStateUpdateAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LockableStateUpdateAbstractMessage::deserialize(CustomDataInput *input) {
    this->_lockedFunc(input);
}

void LockableStateUpdateAbstractMessage::_lockedFunc(CustomDataInput *input) {
    this->locked = input->readBoolean();
}
