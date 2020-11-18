#include "SpawnInformation.h"
#include "SpawnCompanionInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpawnCompanionInformation::deserialize(CustomDataInput *input) {
    SpawnInformation::deserialize(input);
    this->_modelIdFunc(input);
    this->_levelFunc(input);
    this->_summonerIdFunc(input);
    this->_ownerIdFunc(input);
}

void SpawnCompanionInformation::_modelIdFunc(CustomDataInput *input) {
    this->modelId = input->readByte();
    if (this->modelId < 0) {

    }
}

void SpawnCompanionInformation::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 1 || this->level > 200) {

    }
}

void SpawnCompanionInformation::_summonerIdFunc(CustomDataInput *input) {
    this->summonerId = input->readDouble();
    if (this->summonerId < -9007199254740990 || this->summonerId > 9007199254740990) {

    }
}

void SpawnCompanionInformation::_ownerIdFunc(CustomDataInput *input) {
    this->ownerId = input->readDouble();
    if (this->ownerId < -9007199254740990 || this->ownerId > 9007199254740990) {

    }
}
