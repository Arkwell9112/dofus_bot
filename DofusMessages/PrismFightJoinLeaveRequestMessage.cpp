#include "PrismFightJoinLeaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightJoinLeaveRequestMessage::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_joinFunc(input);
}

void PrismFightJoinLeaveRequestMessage::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismFightJoinLeaveRequestMessage::_joinFunc(CustomDataInput *input) {
    this->join = input->readBoolean();
}
