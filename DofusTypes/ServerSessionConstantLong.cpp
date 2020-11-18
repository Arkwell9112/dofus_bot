#include "ServerSessionConstantLong.h"
#include "ServerSessionConstant.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerSessionConstantLong::deserialize(CustomDataInput *input) {
    ServerSessionConstant::deserialize(input);
    this->_valueFunc(input);
}

void ServerSessionConstantLong::_valueFunc(CustomDataInput *input) {
    this->value = input->readDouble();
    if (this->value < -9007199254740990 || this->value > 9007199254740990) {

    }
}
