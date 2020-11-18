#include "GameActionFightCloseCombatMessage.h"
#include "AbstractGameActionFightTargetedAbilityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightCloseCombatMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionFightTargetedAbilityMessage::deserialize(input);
    this->_weaponGenericIdFunc(input);
}

void GameActionFightCloseCombatMessage::_weaponGenericIdFunc(CustomDataInput *input) {
    this->weaponGenericId = input->readVarUhShort();
    if (this->weaponGenericId < 0) {

    }
}
