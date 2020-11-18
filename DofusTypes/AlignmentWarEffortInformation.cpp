#include "AlignmentWarEffortInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlignmentWarEffortInformation::deserialize(CustomDataInput *input) {
    this->_alignmentSideFunc(input);
    this->_alignmentWarEffortFunc(input);
}

void AlignmentWarEffortInformation::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}

void AlignmentWarEffortInformation::_alignmentWarEffortFunc(CustomDataInput *input) {
    this->alignmentWarEffort = input->readVarUhLong();
    if (this->alignmentWarEffort < 0 || this->alignmentWarEffort > 9007199254740990) {

    }
}
