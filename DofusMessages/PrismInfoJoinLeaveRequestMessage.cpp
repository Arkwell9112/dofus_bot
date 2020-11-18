#include "PrismInfoJoinLeaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismInfoJoinLeaveRequestMessage::deserialize(CustomDataInput *input) {
    this->_joinFunc(input);
}

void PrismInfoJoinLeaveRequestMessage::_joinFunc(CustomDataInput *input) {
    this->join = input->readBoolean();
}
