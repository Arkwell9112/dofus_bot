#include "HaapiValidationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiValidationRequestMessage::deserialize(CustomDataInput *input) {
    this->_transactionFunc(input);
}

void HaapiValidationRequestMessage::_transactionFunc(CustomDataInput *input) {
    this->transaction = input->readUTF();
}
