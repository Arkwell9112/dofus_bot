#include "HaapiAuthErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiAuthErrorMessage::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
}

void HaapiAuthErrorMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
