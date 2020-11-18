#include "ArenaLeagueRanking.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ArenaLeagueRanking::deserialize(CustomDataInput *input) {
    this->_rankFunc(input);
    this->_leagueIdFunc(input);
    this->_leaguePointsFunc(input);
    this->_totalLeaguePointsFunc(input);
    this->_ladderPositionFunc(input);
}

void ArenaLeagueRanking::_rankFunc(CustomDataInput *input) {
    this->rank = input->readVarUhShort();
    if (this->rank < 0 || this->rank > 20000) {

    }
}

void ArenaLeagueRanking::_leagueIdFunc(CustomDataInput *input) {
    this->leagueId = input->readVarUhShort();
    if (this->leagueId < 0) {

    }
}

void ArenaLeagueRanking::_leaguePointsFunc(CustomDataInput *input) {
    this->leaguePoints = input->readVarShort();
}

void ArenaLeagueRanking::_totalLeaguePointsFunc(CustomDataInput *input) {
    this->totalLeaguePoints = input->readVarShort();
}

void ArenaLeagueRanking::_ladderPositionFunc(CustomDataInput *input) {
    this->ladderPosition = input->readInt();
}
