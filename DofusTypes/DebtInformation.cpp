#include "DebtInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DebtInformation::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_timestampFunc(input);
}

void DebtInformation::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}

void DebtInformation::_timestampFunc(CustomDataInput *input) {
    this->timestamp = input->readDouble();
    if (this->timestamp < 0 || this->timestamp > 9007199254740990) {

    }
}
