#include "ChallengeTargetUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChallengeTargetUpdateMessage::deserialize(CustomDataInput *input) {
    this->_challengeIdFunc(input);
    this->_targetIdFunc(input);
}

void ChallengeTargetUpdateMessage::_challengeIdFunc(CustomDataInput *input) {
    this->challengeId = input->readVarUhShort();
    if (this->challengeId < 0) {

    }
}

void ChallengeTargetUpdateMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}
