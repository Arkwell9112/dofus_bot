#include "GameFightMonsterInformations.h"
#include "GameFightAIInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightMonsterInformations::deserialize(CustomDataInput *input) {
    GameFightAIInformations::deserialize(input);
    this->_creatureGenericIdFunc(input);
    this->_creatureGradeFunc(input);
    this->_creatureLevelFunc(input);
}

void GameFightMonsterInformations::_creatureGenericIdFunc(CustomDataInput *input) {
    this->creatureGenericId = input->readVarUhShort();
    if (this->creatureGenericId < 0) {

    }
}

void GameFightMonsterInformations::_creatureGradeFunc(CustomDataInput *input) {
    this->creatureGrade = input->readByte();
    if (this->creatureGrade < 0) {

    }
}

void GameFightMonsterInformations::_creatureLevelFunc(CustomDataInput *input) {
    this->creatureLevel = input->readShort();
    if (this->creatureLevel < 0) {

    }
}
