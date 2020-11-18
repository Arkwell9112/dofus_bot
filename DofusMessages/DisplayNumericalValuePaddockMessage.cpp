#include "DisplayNumericalValuePaddockMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DisplayNumericalValuePaddockMessage::deserialize(CustomDataInput *input) {
    this->_rideIdFunc(input);
    this->_valueFunc(input);
    this->_typeFunc(input);
}

void DisplayNumericalValuePaddockMessage::_rideIdFunc(CustomDataInput *input) {
    this->rideId = input->readInt();
}

void DisplayNumericalValuePaddockMessage::_valueFunc(CustomDataInput *input) {
    this->value = input->readInt();
}

void DisplayNumericalValuePaddockMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
