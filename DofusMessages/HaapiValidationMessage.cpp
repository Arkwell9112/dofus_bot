#include "HaapiValidationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiValidationMessage::deserialize(CustomDataInput *input) {
    this->_actionFunc(input);
    this->_codeFunc(input);
}

void HaapiValidationMessage::_actionFunc(CustomDataInput *input) {
    this->action = input->readByte();
    if (this->action < 0) {

    }
}

void HaapiValidationMessage::_codeFunc(CustomDataInput *input) {
    this->code = input->readByte();
    if (this->code < 0) {

    }
}
