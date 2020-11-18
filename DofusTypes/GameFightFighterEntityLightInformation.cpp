#include "GameFightFighterLightInformations.h"
#include "GameFightFighterEntityLightInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightFighterEntityLightInformation::deserialize(CustomDataInput *input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_entityModelIdFunc(input);
    this->_masterIdFunc(input);
}

void GameFightFighterEntityLightInformation::_entityModelIdFunc(CustomDataInput *input) {
    this->entityModelId = input->readByte();
    if (this->entityModelId < 0) {

    }
}

void GameFightFighterEntityLightInformation::_masterIdFunc(CustomDataInput *input) {
    this->masterId = input->readDouble();
    if (this->masterId < -9007199254740990 || this->masterId > 9007199254740990) {

    }
}
