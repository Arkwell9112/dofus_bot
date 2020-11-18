#include "ExchangeBidHouseListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHouseListMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_followFunc(input);
}

void ExchangeBidHouseListMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}

void ExchangeBidHouseListMessage::_followFunc(CustomDataInput *input) {
    this->follow = input->readBoolean();
}
