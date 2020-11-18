#include "IgnoredDeleteResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IgnoredDeleteResultMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_nameFunc(input);
}

void IgnoredDeleteResultMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->success = BooleanByteWrapper::getFlag(_box0, 0);
    this->session = BooleanByteWrapper::getFlag(_box0, 1);
}

void IgnoredDeleteResultMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
