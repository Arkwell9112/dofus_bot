#include "ExchangeBidHouseSearchMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHouseSearchMessage::deserialize(CustomDataInput *input) {
    this->_genIdFunc(input);
    this->_followFunc(input);
}

void ExchangeBidHouseSearchMessage::_genIdFunc(CustomDataInput *input) {
    this->genId = input->readVarUhShort();
    if (this->genId < 0) {

    }
}

void ExchangeBidHouseSearchMessage::_followFunc(CustomDataInput *input) {
    this->follow = input->readBoolean();
}
