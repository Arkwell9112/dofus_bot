#include "FriendInformations.h"
#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendInformations::deserialize(CustomDataInput *input) {
    AbstractContactInformations::deserialize(input);
    this->_playerStateFunc(input);
    this->_lastConnectionFunc(input);
    this->_achievementPointsFunc(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
}

void FriendInformations::_playerStateFunc(CustomDataInput *input) {
    this->playerState = input->readByte();
    if (this->playerState < 0) {

    }
}

void FriendInformations::_lastConnectionFunc(CustomDataInput *input) {
    this->lastConnection = input->readVarUhShort();
    if (this->lastConnection < 0) {

    }
}

void FriendInformations::_achievementPointsFunc(CustomDataInput *input) {
    this->achievementPoints = input->readInt();
}

void FriendInformations::_leagueIdFunc(CustomDataInput *input) {
    this->leagueId = input->readVarShort();
}

void FriendInformations::_ladderPositionFunc(CustomDataInput *input) {
    this->ladderPosition = input->readInt();
}
