#include "FightTriggeredEffect.h"
#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTriggeredEffect::deserialize(CustomDataInput *input) {
    AbstractFightDispellableEffect::deserialize(input);
    this->_param1Func(input);
    this->_param2Func(input);
    this->_param3Func(input);
    this->_delayFunc(input);
}

void FightTriggeredEffect::_delayFunc(CustomDataInput *input) {
    this->delay = input->readShort();
}

void FightTriggeredEffect::_param1Func(CustomDataInput *input) {
    this->param1 = input->readInt();
}

void FightTriggeredEffect::_param2Func(CustomDataInput *input) {
    this->param2 = input->readInt();
}

void FightTriggeredEffect::_param3Func(CustomDataInput *input) {
    this->param3 = input->readInt();
}