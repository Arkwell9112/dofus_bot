#include "NotificationByServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NotificationByServerMessage::deserialize(CustomDataInput *input) {
    std::string _val2;
    this->_idFunc(input);
    unsigned int _parametersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _parametersLen; _i2++) {
        _val2 = input->readUTF();
        this->parameters.push_back(_val2);
    }
    this->_forceOpenFunc(input);
}

void NotificationByServerMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}

void NotificationByServerMessage::_parametersFunc(CustomDataInput *input) {
    std::string _val;
    this->parameters.push_back(_val);
}

void NotificationByServerMessage::_forceOpenFunc(CustomDataInput *input) {
    this->forceOpen = input->readBoolean();
}
