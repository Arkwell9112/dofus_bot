#include "SystemMessageDisplayMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SystemMessageDisplayMessage::deserialize(CustomDataInput *input) {
    std::string _val3;
    this->_hangUpFunc(input);
    this->_msgIdFunc(input);
    unsigned int _parametersLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _parametersLen; _i3++) {
        _val3 = input->readUTF();
        this->parameters.push_back(_val3);
    }
}

void SystemMessageDisplayMessage::_hangUpFunc(CustomDataInput *input) {
    this->hangUp = input->readBoolean();
}

void SystemMessageDisplayMessage::_msgIdFunc(CustomDataInput *input) {
    this->msgId = input->readVarUhShort();
    if (this->msgId < 0) {

    }
}

void SystemMessageDisplayMessage::_parametersFunc(CustomDataInput *input) {
    std::string _val;
    this->parameters.push_back(_val);
}
