#include "LivingObjectMessageRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LivingObjectMessageRequestMessage::deserialize(CustomDataInput *input) {
    std::string _val2;
    this->_msgIdFunc(input);
    unsigned int _parametersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _parametersLen; _i2++) {
        _val2 = input->readUTF();
        this->parameters.push_back(_val2);
    }
    this->_livingObjectFunc(input);
}

void LivingObjectMessageRequestMessage::_msgIdFunc(CustomDataInput *input) {
    this->msgId = input->readVarUhShort();
    if (this->msgId < 0) {

    }
}

void LivingObjectMessageRequestMessage::_parametersFunc(CustomDataInput *input) {
    std::string _val;
    this->parameters.push_back(_val);
}

void LivingObjectMessageRequestMessage::_livingObjectFunc(CustomDataInput *input) {
    this->livingObject = input->readVarUhInt();
    if (this->livingObject < 0) {

    }
}
