#include "OnConnectionEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void OnConnectionEventMessage::deserialize(CustomDataInput *input) {
    this->_eventTypeFunc(input);
}

void OnConnectionEventMessage::_eventTypeFunc(CustomDataInput *input) {
    this->eventType = input->readByte();
    if (this->eventType < 0) {

    }
}
