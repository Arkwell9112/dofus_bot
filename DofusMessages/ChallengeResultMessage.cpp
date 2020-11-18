#include "ChallengeResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChallengeResultMessage::deserialize(CustomDataInput *input) {
    this->_challengeIdFunc(input);
    this->_successFunc(input);
}

void ChallengeResultMessage::_challengeIdFunc(CustomDataInput *input) {
    this->challengeId = input->readVarUhShort();
    if (this->challengeId < 0) {

    }
}

void ChallengeResultMessage::_successFunc(CustomDataInput *input) {
    this->success = input->readBoolean();
}
