#include "IgnoredDeleteRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IgnoredDeleteRequestMessage::deserialize(CustomDataInput *input) {
    this->_accountIdFunc(input);
    this->_sessionFunc(input);
}

void IgnoredDeleteRequestMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void IgnoredDeleteRequestMessage::_sessionFunc(CustomDataInput *input) {
    this->session = input->readBoolean();
}
