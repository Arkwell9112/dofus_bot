#include "ChannelEnablingChangeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChannelEnablingChangeMessage::deserialize(CustomDataInput *input) {
    this->_channelFunc(input);
    this->_enableFunc(input);
}

void ChannelEnablingChangeMessage::_channelFunc(CustomDataInput *input) {
    this->channel = input->readByte();
    if (this->channel < 0) {

    }
}

void ChannelEnablingChangeMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
