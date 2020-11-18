#include "SelectedServerRefusedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SelectedServerRefusedMessage::deserialize(CustomDataInput *input) {
    this->_serverIdFunc(input);
    this->_errorFunc(input);
    this->_serverStatusFunc(input);
}

void SelectedServerRefusedMessage::_serverIdFunc(CustomDataInput *input) {
    this->serverId = input->readVarUhShort();
    if (this->serverId < 0) {

    }
}

void SelectedServerRefusedMessage::_errorFunc(CustomDataInput *input) {
    this->error = input->readByte();
    if (this->error < 0) {

    }
}

void SelectedServerRefusedMessage::_serverStatusFunc(CustomDataInput *input) {
    this->serverStatus = input->readByte();
    if (this->serverStatus < 0) {

    }
}
