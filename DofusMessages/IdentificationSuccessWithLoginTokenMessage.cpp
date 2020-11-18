#include "IdentificationSuccessWithLoginTokenMessage.h"
#include "IdentificationSuccessMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IdentificationSuccessWithLoginTokenMessage::deserialize(CustomDataInput *input) {
    IdentificationSuccessMessage::deserialize(input);
    this->_loginTokenFunc(input);
}

void IdentificationSuccessWithLoginTokenMessage::_loginTokenFunc(CustomDataInput *input) {
    this->loginToken = input->readUTF();
}
