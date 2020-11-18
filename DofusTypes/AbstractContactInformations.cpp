#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractContactInformations::deserialize(CustomDataInput *input) {
    this->_accountIdFunc(input);
    this->_accountNameFunc(input);
}

void AbstractContactInformations::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void AbstractContactInformations::_accountNameFunc(CustomDataInput *input) {
    this->accountName = input->readUTF();
}
