#include "HaapiCancelBidRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HaapiCancelBidRequestMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_typeFunc(input);
}

void HaapiCancelBidRequestMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhLong();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}

void HaapiCancelBidRequestMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
