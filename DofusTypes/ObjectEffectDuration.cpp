#include "ObjectEffectDuration.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectDuration::deserialize(CustomDataInput *input) {
    ObjectEffect::deserialize(input);
    this->_daysFunc(input);
    this->_hoursFunc(input);
    this->_minutesFunc(input);
}

void ObjectEffectDuration::_daysFunc(CustomDataInput *input) {
    this->days = input->readVarUhShort();
    if (this->days < 0) {

    }
}

void ObjectEffectDuration::_hoursFunc(CustomDataInput *input) {
    this->hours = input->readByte();
    if (this->hours < 0) {

    }
}

void ObjectEffectDuration::_minutesFunc(CustomDataInput *input) {
    this->minutes = input->readByte();
    if (this->minutes < 0) {

    }
}
