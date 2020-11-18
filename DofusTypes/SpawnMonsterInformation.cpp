#include "SpawnMonsterInformation.h"
#include "BaseSpawnMonsterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpawnMonsterInformation::deserialize(CustomDataInput *input) {
    BaseSpawnMonsterInformation::deserialize(input);
    this->_creatureGradeFunc(input);
}

void SpawnMonsterInformation::_creatureGradeFunc(CustomDataInput *input) {
    this->creatureGrade = input->readByte();
    if (this->creatureGrade < 0) {

    }
}
