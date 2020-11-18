#include "ExchangeBidHouseTypeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHouseTypeMessage::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
    this->_followFunc(input);
}

void ExchangeBidHouseTypeMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readVarUhInt();
    if (this->type < 0) {

    }
}

void ExchangeBidHouseTypeMessage::_followFunc(CustomDataInput *input) {
    this->follow = input->readBoolean();
}
