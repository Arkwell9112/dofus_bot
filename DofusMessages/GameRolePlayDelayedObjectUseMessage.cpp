#include "ObjectUseMessage.h"
#include "GameRolePlayDelayedObjectUseMessage.h"
#include "GameRolePlayDelayedActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayDelayedObjectUseMessage::deserialize(CustomDataInput *input) {
    GameRolePlayDelayedActionMessage::deserialize(input);
    this->_objectGIDFunc(input);
}

void GameRolePlayDelayedObjectUseMessage::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}
