#include "ServerSessionConstant.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ServerSessionConstant::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void ServerSessionConstant::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}
