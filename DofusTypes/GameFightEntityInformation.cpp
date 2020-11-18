#include "GameFightFighterInformations.h"
#include "GameFightEntityInformation.h"
#include "EntityInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightEntityInformation::deserialize(CustomDataInput *input) {
    GameFightFighterInformations::deserialize(input);
    this->_entityModelIdFunc(input);
    this->_levelFunc(input);
    this->_masterIdFunc(input);
}

void GameFightEntityInformation::_entityModelIdFunc(CustomDataInput *input) {
    this->entityModelId = input->readByte();
    if (this->entityModelId < 0) {

    }
}

void GameFightEntityInformation::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 1 || this->level > 200) {

    }
}

void GameFightEntityInformation::_masterIdFunc(CustomDataInput *input) {
    this->masterId = input->readDouble();
    if (this->masterId < -9007199254740990 || this->masterId > 9007199254740990) {

    }
}
