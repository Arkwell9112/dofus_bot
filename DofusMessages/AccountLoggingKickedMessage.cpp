#include "AccountLoggingKickedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AccountLoggingKickedMessage::deserialize(CustomDataInput *input) {
    this->_daysFunc(input);
    this->_hoursFunc(input);
    this->_minutesFunc(input);
}

void AccountLoggingKickedMessage::_daysFunc(CustomDataInput *input) {
    this->days = input->readVarUhShort();
    if (this->days < 0) {

    }
}

void AccountLoggingKickedMessage::_hoursFunc(CustomDataInput *input) {
    this->hours = input->readByte();
    if (this->hours < 0) {

    }
}

void AccountLoggingKickedMessage::_minutesFunc(CustomDataInput *input) {
    this->minutes = input->readByte();
    if (this->minutes < 0) {

    }
}
