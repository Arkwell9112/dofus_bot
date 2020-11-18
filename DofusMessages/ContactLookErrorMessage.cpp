#include "ContactLookErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ContactLookErrorMessage::deserialize(CustomDataInput *input) {
    this->_requestIdFunc(input);
}

void ContactLookErrorMessage::_requestIdFunc(CustomDataInput *input) {
    this->requestId = input->readVarUhInt();
    if (this->requestId < 0) {

    }
}
