#include "GameRolePlayArenaLeagueRewardsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaLeagueRewardsMessage::deserialize(CustomDataInput *input) {
    this->_seasonIdFunc(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
    this->_endSeasonRewardFunc(input);
}

void GameRolePlayArenaLeagueRewardsMessage::_seasonIdFunc(CustomDataInput *input) {
    this->seasonId = input->readVarUhShort();
    if (this->seasonId < 0) {

    }
}

void GameRolePlayArenaLeagueRewardsMessage::_leagueIdFunc(CustomDataInput *input) {
    this->leagueId = input->readVarUhShort();
    if (this->leagueId < 0) {

    }
}

void GameRolePlayArenaLeagueRewardsMessage::_ladderPositionFunc(CustomDataInput *input) {
    this->ladderPosition = input->readInt();
}

void GameRolePlayArenaLeagueRewardsMessage::_endSeasonRewardFunc(CustomDataInput *input) {
    this->endSeasonReward = input->readBoolean();
}
