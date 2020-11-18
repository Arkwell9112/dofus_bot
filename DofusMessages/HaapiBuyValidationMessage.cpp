#include "HaapiValidationMessage.h"
#include "HaapiBuyValidationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiBuyValidationMessage::deserialize(CustomDataInput *input) {
    HaapiValidationMessage::deserialize(input);
    this->_amountFunc(input);
    this->_emailFunc(input);
}

void HaapiBuyValidationMessage::_amountFunc(CustomDataInput *input) {
    this->amount = input->readVarUhLong();
    if (this->amount < 0 || this->amount > 9007199254740990) {

    }
}

void HaapiBuyValidationMessage::_emailFunc(CustomDataInput *input) {
    this->email = input->readUTF();
}
