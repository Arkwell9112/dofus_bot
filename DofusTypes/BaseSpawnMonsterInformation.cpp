#include "SpawnMonsterInformation.h"
#include "SpawnInformation.h"
#include "BaseSpawnMonsterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BaseSpawnMonsterInformation::deserialize(CustomDataInput *input) {
    SpawnInformation::deserialize(input);
    this->_creatureGenericIdFunc(input);
}

void BaseSpawnMonsterInformation::_creatureGenericIdFunc(CustomDataInput *input) {
    this->creatureGenericId = input->readVarUhShort();
    if (this->creatureGenericId < 0) {

    }
}
