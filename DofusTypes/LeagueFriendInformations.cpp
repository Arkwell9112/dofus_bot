#include "LeagueFriendInformations.h"
#include "FriendInformations.h"
#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LeagueFriendInformations::deserialize(CustomDataInput *input) {
    AbstractContactInformations::deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_levelFunc(input);
    this->_leagueIdFunc(input);
    this->_totalLeaguePointsFunc(input);
    this->_ladderPositionFunc(input);
}

void LeagueFriendInformations::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void LeagueFriendInformations::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void LeagueFriendInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void LeagueFriendInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void LeagueFriendInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void LeagueFriendInformations::_leagueIdFunc(CustomDataInput *input) {
    this->leagueId = input->readVarShort();
}

void LeagueFriendInformations::_totalLeaguePointsFunc(CustomDataInput *input) {
    this->totalLeaguePoints = input->readVarShort();
}

void LeagueFriendInformations::_ladderPositionFunc(CustomDataInput *input) {
    this->ladderPosition = input->readInt();
}
