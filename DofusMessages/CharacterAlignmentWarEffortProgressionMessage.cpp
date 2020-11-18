#include "CharacterAlignmentWarEffortProgressionMessage.h"
#include "AlignmentWarEffortProgressionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterAlignmentWarEffortProgressionMessage::deserialize(CustomDataInput *input) {
    this->_alignmentWarEffortDailyLimitFunc(input);
    this->_alignmentWarEffortDailyDonationFunc(input);
    this->_alignmentWarEffortPersonalDonationFunc(input);
}

void CharacterAlignmentWarEffortProgressionMessage::_alignmentWarEffortDailyLimitFunc(CustomDataInput *input) {
    this->alignmentWarEffortDailyLimit = input->readVarUhLong();
    if (this->alignmentWarEffortDailyLimit < 0 || this->alignmentWarEffortDailyLimit > 9007199254740990) {

    }
}

void CharacterAlignmentWarEffortProgressionMessage::_alignmentWarEffortDailyDonationFunc(CustomDataInput *input) {
    this->alignmentWarEffortDailyDonation = input->readVarUhLong();
    if (this->alignmentWarEffortDailyDonation < 0 || this->alignmentWarEffortDailyDonation > 9007199254740990) {

    }
}

void CharacterAlignmentWarEffortProgressionMessage::_alignmentWarEffortPersonalDonationFunc(CustomDataInput *input) {
    this->alignmentWarEffortPersonalDonation = input->readVarUhLong();
    if (this->alignmentWarEffortPersonalDonation < 0 || this->alignmentWarEffortPersonalDonation > 9007199254740990) {

    }
}
