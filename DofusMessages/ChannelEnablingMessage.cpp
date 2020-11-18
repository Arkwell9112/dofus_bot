#include "ChannelEnablingMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChannelEnablingMessage::deserialize(CustomDataInput *input) {
    this->_channelFunc(input);
    this->_enableFunc(input);
}

void ChannelEnablingMessage::_channelFunc(CustomDataInput *input) {
    this->channel = input->readByte();
    if (this->channel < 0) {

    }
}

void ChannelEnablingMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
