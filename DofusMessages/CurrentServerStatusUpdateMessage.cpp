#include "ServerStatusUpdateMessage.h"
#include "CurrentServerStatusUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CurrentServerStatusUpdateMessage::deserialize(CustomDataInput *input) {
    this->_statusFunc(input);
}

void CurrentServerStatusUpdateMessage::_statusFunc(CustomDataInput *input) {
    this->status = input->readByte();
    if (this->status < 0) {

    }
}
