#include "ExchangeCraftResultWithObjectDescMessage.h"
#include "ExchangeCraftResultMagicWithObjectDescMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftResultMagicWithObjectDescMessage::deserialize(CustomDataInput *input) {
    ExchangeCraftResultWithObjectDescMessage::deserialize(input);
    this->_magicPoolStatusFunc(input);
}

void ExchangeCraftResultMagicWithObjectDescMessage::_magicPoolStatusFunc(CustomDataInput *input) {
    this->magicPoolStatus = input->readByte();
}
