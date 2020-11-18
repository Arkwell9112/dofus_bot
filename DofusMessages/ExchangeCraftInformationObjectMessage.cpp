#include "ExchangeCraftResultWithObjectIdMessage.h"
#include "ExchangeCraftInformationObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftInformationObjectMessage::deserialize(CustomDataInput *input) {
    ExchangeCraftResultWithObjectIdMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void ExchangeCraftInformationObjectMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
