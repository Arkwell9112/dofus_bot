#include "ExchangeCraftResultWithObjectIdMessage.h"
#include "ExchangeCraftResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftResultWithObjectIdMessage::deserialize(CustomDataInput *input) {
    ExchangeCraftResultMessage::deserialize(input);
    this->_objectGenericIdFunc(input);
}

void ExchangeCraftResultWithObjectIdMessage::_objectGenericIdFunc(CustomDataInput *input) {
    this->objectGenericId = input->readVarUhShort();
    if (this->objectGenericId < 0) {

    }
}
