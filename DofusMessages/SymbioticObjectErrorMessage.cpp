#include "SymbioticObjectErrorMessage.h"
#include "ObjectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SymbioticObjectErrorMessage::deserialize(CustomDataInput *input) {
    ObjectErrorMessage::deserialize(input);
    this->_errorCodeFunc(input);
}

void SymbioticObjectErrorMessage::_errorCodeFunc(CustomDataInput *input) {
    this->errorCode = input->readByte();
}
