#include "ExchangeStartOkNpcTradeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartOkNpcTradeMessage::deserialize(CustomDataInput *input) {
    this->_npcIdFunc(input);
}

void ExchangeStartOkNpcTradeMessage::_npcIdFunc(CustomDataInput *input) {
    this->npcId = input->readDouble();
    if (this->npcId < -9007199254740990 || this->npcId > 9007199254740990) {

    }
}
