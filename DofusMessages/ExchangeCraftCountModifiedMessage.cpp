#include "ExchangeCraftCountModifiedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftCountModifiedMessage::deserialize(CustomDataInput *input) {
    this->_countFunc(input);
}

void ExchangeCraftCountModifiedMessage::_countFunc(CustomDataInput *input) {
    this->count = input->readVarInt();
}
