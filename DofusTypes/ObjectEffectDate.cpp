#include "ObjectEffectDate.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectDate::deserialize(CustomDataInput *input) {
    ObjectEffect::deserialize(input);
    this->_yearFunc(input);
    this->_monthFunc(input);
    this->_dayFunc(input);
    this->_hourFunc(input);
    this->_minuteFunc(input);
}

void ObjectEffectDate::_yearFunc(CustomDataInput *input) {
    this->year = input->readVarUhShort();
    if (this->year < 0) {

    }
}

void ObjectEffectDate::_monthFunc(CustomDataInput *input) {
    this->month = input->readByte();
    if (this->month < 0) {

    }
}

void ObjectEffectDate::_dayFunc(CustomDataInput *input) {
    this->day = input->readByte();
    if (this->day < 0) {

    }
}

void ObjectEffectDate::_hourFunc(CustomDataInput *input) {
    this->hour = input->readByte();
    if (this->hour < 0) {

    }
}

void ObjectEffectDate::_minuteFunc(CustomDataInput *input) {
    this->minute = input->readByte();
    if (this->minute < 0) {

    }
}
