#include "ExchangeStartOkMulticraftCustomerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartOkMulticraftCustomerMessage::deserialize(CustomDataInput *input) {
    this->_skillIdFunc(input);
    this->_crafterJobLevelFunc(input);
}

void ExchangeStartOkMulticraftCustomerMessage::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhInt();
    if (this->skillId < 0) {

    }
}

void ExchangeStartOkMulticraftCustomerMessage::_crafterJobLevelFunc(CustomDataInput *input) {
    this->crafterJobLevel = input->readUnsignedByte();
    if (this->crafterJobLevel < 0 || this->crafterJobLevel > 255) {

    }
}
