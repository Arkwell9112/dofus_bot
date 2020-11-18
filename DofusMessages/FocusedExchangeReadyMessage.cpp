#include "FocusedExchangeReadyMessage.h"
#include "ExchangeReadyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FocusedExchangeReadyMessage::deserialize(CustomDataInput *input) {
    ExchangeReadyMessage::deserialize(input);
    this->_focusActionIdFunc(input);
}

void FocusedExchangeReadyMessage::_focusActionIdFunc(CustomDataInput *input) {
    this->focusActionId = input->readVarUhInt();
    if (this->focusActionId < 0) {

    }
}
