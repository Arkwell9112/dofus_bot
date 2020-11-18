#include "AlignmentWarEffortDonateRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlignmentWarEffortDonateRequestMessage::deserialize(CustomDataInput *input) {
    this->_donationFunc(input);
}

void AlignmentWarEffortDonateRequestMessage::_donationFunc(CustomDataInput *input) {
    this->donation = input->readVarUhLong();
    if (this->donation < 0 || this->donation > 9007199254740990) {

    }
}
