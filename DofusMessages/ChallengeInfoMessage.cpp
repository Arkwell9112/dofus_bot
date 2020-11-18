#include "ChallengeInfoMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChallengeInfoMessage::deserialize(CustomDataInput *input) {
    this->_challengeIdFunc(input);
    this->_targetIdFunc(input);
    this->_xpBonusFunc(input);
    this->_dropBonusFunc(input);
}

void ChallengeInfoMessage::_challengeIdFunc(CustomDataInput *input) {
    this->challengeId = input->readVarUhShort();
    if (this->challengeId < 0) {

    }
}

void ChallengeInfoMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void ChallengeInfoMessage::_xpBonusFunc(CustomDataInput *input) {
    this->xpBonus = input->readVarUhInt();
    if (this->xpBonus < 0) {

    }
}

void ChallengeInfoMessage::_dropBonusFunc(CustomDataInput *input) {
    this->dropBonus = input->readVarUhInt();
    if (this->dropBonus < 0) {

    }
}
