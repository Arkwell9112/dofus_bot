#include "ServerSessionConstantString.h"
#include "ServerSessionConstant.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerSessionConstantString::deserialize(CustomDataInput *input) {
    ServerSessionConstant::deserialize(input);
    this->_valueFunc(input);
}

void ServerSessionConstantString::_valueFunc(CustomDataInput *input) {
    this->value = input->readUTF();
}
