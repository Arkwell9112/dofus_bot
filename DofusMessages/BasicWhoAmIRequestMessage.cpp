#include "BasicWhoAmIRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicWhoAmIRequestMessage::deserialize(CustomDataInput *input) {
    this->_verboseFunc(input);
}

void BasicWhoAmIRequestMessage::_verboseFunc(CustomDataInput *input) {
    this->verbose = input->readBoolean();
}
