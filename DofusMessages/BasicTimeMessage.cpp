#include "BasicTimeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicTimeMessage::deserialize(CustomDataInput *input) {
    this->_timestampFunc(input);
    this->_timezoneOffsetFunc(input);
}

void BasicTimeMessage::_timestampFunc(CustomDataInput *input) {
    this->timestamp = input->readDouble();
    if (this->timestamp < 0 || this->timestamp > 9007199254740990) {

    }
}

void BasicTimeMessage::_timezoneOffsetFunc(CustomDataInput *input) {
    this->timezoneOffset = input->readShort();
}
