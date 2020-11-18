#include "GameRolePlayArenaFightPropositionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaFightPropositionMessage::deserialize(CustomDataInput *input) {
    double _val2 = 0;
    this->_fightIdFunc(input);
    unsigned int _alliesIdLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _alliesIdLen; _i2++) {
        _val2 = input->readDouble();
        if (_val2 < -9007199254740990 || _val2 > 9007199254740990) {

        }
        this->alliesId.push_back(_val2);
    }
    this->_durationFunc(input);
}

void GameRolePlayArenaFightPropositionMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameRolePlayArenaFightPropositionMessage::_alliesIdFunc(CustomDataInput *input) {
    double _val = input->readDouble();
    if (_val < -9007199254740990 || _val > 9007199254740990) {

    }
    this->alliesId.push_back(_val);
}

void GameRolePlayArenaFightPropositionMessage::_durationFunc(CustomDataInput *input) {
    this->duration = input->readVarUhShort();
    if (this->duration < 0) {

    }
}
