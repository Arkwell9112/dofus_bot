#include "AccessoryPreviewErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AccessoryPreviewErrorMessage::deserialize(CustomDataInput *input) {
    this->_errorFunc(input);
}

void AccessoryPreviewErrorMessage::_errorFunc(CustomDataInput *input) {
    this->error = input->readByte();
    if (this->error < 0) {

    }
}
