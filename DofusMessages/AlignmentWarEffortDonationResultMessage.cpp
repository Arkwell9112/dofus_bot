#include "AlignmentWarEffortDonationResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlignmentWarEffortDonationResultMessage::deserialize(CustomDataInput *input) {
    this->_resultFunc(input);
}

void AlignmentWarEffortDonationResultMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
}
