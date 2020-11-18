#include "EntityTalkMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void EntityTalkMessage::deserialize(CustomDataInput *input) {
    std::string _val3;
    this->_entityIdFunc(input);
    this->_textIdFunc(input);
    unsigned int _parametersLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _parametersLen; _i3++) {
        _val3 = input->readUTF();
        this->parameters.push_back(_val3);
    }
}

void EntityTalkMessage::_entityIdFunc(CustomDataInput *input) {
    this->entityId = input->readDouble();
    if (this->entityId < -9007199254740990 || this->entityId > 9007199254740990) {

    }
}

void EntityTalkMessage::_textIdFunc(CustomDataInput *input) {
    this->textId = input->readVarUhShort();
    if (this->textId < 0) {

    }
}

void EntityTalkMessage::_parametersFunc(CustomDataInput *input) {
    std::string _val;
    this->parameters.push_back(_val);
}
