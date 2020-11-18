#include "GameFightFighterNamedInformations.h"
#include "GameFightFighterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightFighterNamedInformations::deserialize(CustomDataInput *input) {
    GameFightFighterInformations::deserialize(input);
    this->_nameFunc(input);
    this->status.deserialize(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
    this->_hiddenInPrefightFunc(input);
}

void GameFightFighterNamedInformations::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void GameFightFighterNamedInformations::_leagueIdFunc(CustomDataInput *input) {
    this->leagueId = input->readVarShort();
}

void GameFightFighterNamedInformations::_ladderPositionFunc(CustomDataInput *input) {
    this->ladderPosition = input->readInt();
}

void GameFightFighterNamedInformations::_hiddenInPrefightFunc(CustomDataInput *input) {
    this->hiddenInPrefight = input->readBoolean();
}
