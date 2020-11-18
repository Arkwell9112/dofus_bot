#include "GameFightFighterNamedInformations.h"
#include "GameFightCharacterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightCharacterInformations::deserialize(CustomDataInput *input) {
    GameFightFighterNamedInformations::deserialize(input);
    this->_levelFunc(input);
    this->alignmentInfos.deserialize(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
}

void GameFightCharacterInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void GameFightCharacterInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void GameFightCharacterInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}
