#include "BasicWhoIsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicWhoIsRequestMessage::deserialize(CustomDataInput *input) {
    this->_verboseFunc(input);
    this->_searchFunc(input);
}

void BasicWhoIsRequestMessage::_verboseFunc(CustomDataInput *input) {
    this->verbose = input->readBoolean();
}

void BasicWhoIsRequestMessage::_searchFunc(CustomDataInput *input) {
    this->search = input->readUTF();
}
