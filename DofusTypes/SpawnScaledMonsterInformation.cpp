#include "SpawnScaledMonsterInformation.h"
#include "SpawnMonsterInformation.h"
#include "BaseSpawnMonsterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpawnScaledMonsterInformation::deserialize(CustomDataInput *input) {
    BaseSpawnMonsterInformation::deserialize(input);
    this->_creatureLevelFunc(input);
}

void SpawnScaledMonsterInformation::_creatureLevelFunc(CustomDataInput *input) {
    this->creatureLevel = input->readShort();
    if (this->creatureLevel < 0) {

    }
}
