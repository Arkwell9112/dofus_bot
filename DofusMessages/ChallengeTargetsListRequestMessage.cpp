#include "ChallengeTargetsListRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChallengeTargetsListRequestMessage::deserialize(CustomDataInput *input) {
    this->_challengeIdFunc(input);
}

void ChallengeTargetsListRequestMessage::_challengeIdFunc(CustomDataInput *input) {
    this->challengeId = input->readVarUhShort();
    if (this->challengeId < 0) {

    }
}
