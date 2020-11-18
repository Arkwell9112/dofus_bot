#include "FightTeamInformations.h"
#include "AbstractFightTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractFightTeamInformations::deserialize(CustomDataInput *input) {
    this->_teamIdFunc(input);
    this->_leaderIdFunc(input);
    this->_teamSideFunc(input);
    this->_teamTypeIdFunc(input);
    this->_nbWavesFunc(input);
}

void AbstractFightTeamInformations::_teamIdFunc(CustomDataInput *input) {
    this->teamId = input->readByte();
    if (this->teamId < 0) {

    }
}

void AbstractFightTeamInformations::_leaderIdFunc(CustomDataInput *input) {
    this->leaderId = input->readDouble();
    if (this->leaderId < -9007199254740990 || this->leaderId > 9007199254740990) {

    }
}

void AbstractFightTeamInformations::_teamSideFunc(CustomDataInput *input) {
    this->teamSide = input->readByte();
}

void AbstractFightTeamInformations::_teamTypeIdFunc(CustomDataInput *input) {
    this->teamTypeId = input->readByte();
    if (this->teamTypeId < 0) {

    }
}

void AbstractFightTeamInformations::_nbWavesFunc(CustomDataInput *input) {
    this->nbWaves = input->readByte();
    if (this->nbWaves < 0) {

    }
}
