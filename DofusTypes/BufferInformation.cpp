#include "BufferInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BufferInformation::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_amountFunc(input);
}

void BufferInformation::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhLong();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}

void BufferInformation::_amountFunc(CustomDataInput *input) {
    this->amount = input->readVarUhLong();
    if (this->amount < 0 || this->amount > 9007199254740990) {

    }
}
