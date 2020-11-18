#include "ExchangeCraftCountRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftCountRequestMessage::deserialize(CustomDataInput *input) {
    this->_countFunc(input);
}

void ExchangeCraftCountRequestMessage::_countFunc(CustomDataInput *input) {
    this->count = input->readVarInt();
}
