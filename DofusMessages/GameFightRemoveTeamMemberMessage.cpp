#include "GameFightRemoveTeamMemberMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightRemoveTeamMemberMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_teamIdFunc(input);
    this->_charIdFunc(input);
}

void GameFightRemoveTeamMemberMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameFightRemoveTeamMemberMessage::_teamIdFunc(CustomDataInput *input) {
    this->teamId = input->readByte();
    if (this->teamId < 0) {

    }
}

void GameFightRemoveTeamMemberMessage::_charIdFunc(CustomDataInput *input) {
    this->charId = input->readDouble();
    if (this->charId < -9007199254740990 || this->charId > 9007199254740990) {

    }
}
