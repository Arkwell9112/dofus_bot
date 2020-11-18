#include "LeaveDialogMessage.h"
#include "ExchangeLeaveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeLeaveMessage::deserialize(CustomDataInput *input) {
    LeaveDialogMessage::deserialize(input);
    this->_successFunc(input);
}

void ExchangeLeaveMessage::_successFunc(CustomDataInput *input) {
    this->success = input->readBoolean();
}
