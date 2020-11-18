#include "GameFightEffectTriggerCount.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightEffectTriggerCount::deserialize(CustomDataInput *input) {
    this->_effectIdFunc(input);
    this->_targetIdFunc(input);
    this->_countFunc(input);
}

void GameFightEffectTriggerCount::_effectIdFunc(CustomDataInput *input) {
    this->effectId = input->readVarUhInt();
    if (this->effectId < 0) {

    }
}

void GameFightEffectTriggerCount::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameFightEffectTriggerCount::_countFunc(CustomDataInput *input) {
    this->count = input->readByte();
    if (this->count < 0) {

    }
}
