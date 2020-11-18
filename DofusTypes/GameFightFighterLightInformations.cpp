#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightFighterLightInformations::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_waveFunc(input);
    this->_levelFunc(input);
    this->_breedFunc(input);
}

void GameFightFighterLightInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->alive = BooleanByteWrapper::getFlag(_box0, 1);
}

void GameFightFighterLightInformations::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}

void GameFightFighterLightInformations::_waveFunc(CustomDataInput *input) {
    this->wave = input->readByte();
    if (this->wave < 0) {

    }
}

void GameFightFighterLightInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void GameFightFighterLightInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}
