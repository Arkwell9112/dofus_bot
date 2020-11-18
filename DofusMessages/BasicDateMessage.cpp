#include "BasicDateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicDateMessage::deserialize(CustomDataInput *input) {
    this->_dayFunc(input);
    this->_monthFunc(input);
    this->_yearFunc(input);
}

void BasicDateMessage::_dayFunc(CustomDataInput *input) {
    this->day = input->readByte();
    if (this->day < 0) {

    }
}

void BasicDateMessage::_monthFunc(CustomDataInput *input) {
    this->month = input->readByte();
    if (this->month < 0) {

    }
}

void BasicDateMessage::_yearFunc(CustomDataInput *input) {
    this->year = input->readShort();
    if (this->year < 0) {

    }
}
