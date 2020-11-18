#include "ServerSelectionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerSelectionMessage::deserialize(CustomDataInput *input) {
    this->_serverIdFunc(input);
}

void ServerSelectionMessage::_serverIdFunc(CustomDataInput *input) {
    this->serverId = input->readVarUhShort();
    if (this->serverId < 0) {

    }
}
