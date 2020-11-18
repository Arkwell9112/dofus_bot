#include "IdentificationMessage.h"
#include "IdentificationAccountForceMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdentificationAccountForceMessage::deserialize(CustomDataInput *input) {
    IdentificationMessage::deserialize(input);
    this->_forcedAccountLoginFunc(input);
}

void IdentificationAccountForceMessage::_forcedAccountLoginFunc(CustomDataInput *input) {
    this->forcedAccountLogin = input->readUTF();
}
