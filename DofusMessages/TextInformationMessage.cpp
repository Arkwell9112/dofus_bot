#include "TextInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TextInformationMessage::deserialize(CustomDataInput *input) {
    std::string _val3;
    this->_msgTypeFunc(input);
    this->_msgIdFunc(input);
    unsigned int _parametersLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _parametersLen; _i3++) {
        _val3 = input->readUTF();
        this->parameters.push_back(_val3);
    }
}

void TextInformationMessage::_msgTypeFunc(CustomDataInput *input) {
    this->msgType = input->readByte();
    if (this->msgType < 0) {

    }
}

void TextInformationMessage::_msgIdFunc(CustomDataInput *input) {
    this->msgId = input->readVarUhShort();
    if (this->msgId < 0) {

    }
}

void TextInformationMessage::_parametersFunc(CustomDataInput *input) {
    std::string _val;
    this->parameters.push_back(_val);
}
