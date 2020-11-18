#include "HaapiConfirmationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiConfirmationRequestMessage::deserialize(CustomDataInput *input) {
    this->_kamasFunc(input);
    this->_ogrinesFunc(input);
    this->_rateFunc(input);
    this->_actionFunc(input);
}

void HaapiConfirmationRequestMessage::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}

void HaapiConfirmationRequestMessage::_ogrinesFunc(CustomDataInput *input) {
    this->ogrines = input->readVarUhLong();
    if (this->ogrines < 0 || this->ogrines > 9007199254740990) {

    }
}

void HaapiConfirmationRequestMessage::_rateFunc(CustomDataInput *input) {
    this->rate = input->readVarUhShort();
    if (this->rate < 0) {

    }
}

void HaapiConfirmationRequestMessage::_actionFunc(CustomDataInput *input) {
    this->action = input->readByte();
    if (this->action < 0) {

    }
}
