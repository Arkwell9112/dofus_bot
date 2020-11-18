#include "GameFightJoinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightJoinMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_timeMaxBeforeFightStartFunc(input);
    this->_fightTypeFunc(input);
}

void GameFightJoinMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->isTeamPhase = BooleanByteWrapper::getFlag(_box0, 0);
    this->canBeCancelled = BooleanByteWrapper::getFlag(_box0, 1);
    this->canSayReady = BooleanByteWrapper::getFlag(_box0, 2);
    this->isFightStarted = BooleanByteWrapper::getFlag(_box0, 3);
}

void GameFightJoinMessage::_timeMaxBeforeFightStartFunc(CustomDataInput *input) {
    this->timeMaxBeforeFightStart = input->readShort();
    if (this->timeMaxBeforeFightStart < 0) {

    }
}

void GameFightJoinMessage::_fightTypeFunc(CustomDataInput *input) {
    this->fightType = input->readByte();
    if (this->fightType < 0) {

    }
}
