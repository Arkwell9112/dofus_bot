#include "ServerSessionConstantInteger.h"
#include "ServerSessionConstant.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerSessionConstantInteger::deserialize(CustomDataInput *input) {
    ServerSessionConstant::deserialize(input);
    this->_valueFunc(input);
}

void ServerSessionConstantInteger::_valueFunc(CustomDataInput *input) {
    this->value = input->readInt();
}
