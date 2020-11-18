#include "HaapiConfirmationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiConfirmationMessage::deserialize(CustomDataInput *input) {
    this->_kamasFunc(input);
    this->_amountFunc(input);
    this->_rateFunc(input);
    this->_actionFunc(input);
    this->_transactionFunc(input);
}

void HaapiConfirmationMessage::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}

void HaapiConfirmationMessage::_amountFunc(CustomDataInput *input) {
    this->amount = input->readVarUhLong();
    if (this->amount < 0 || this->amount > 9007199254740990) {

    }
}

void HaapiConfirmationMessage::_rateFunc(CustomDataInput *input) {
    this->rate = input->readVarUhShort();
    if (this->rate < 0) {

    }
}

void HaapiConfirmationMessage::_actionFunc(CustomDataInput *input) {
    this->action = input->readByte();
    if (this->action < 0) {

    }
}

void HaapiConfirmationMessage::_transactionFunc(CustomDataInput *input) {
    this->transaction = input->readUTF();
}
