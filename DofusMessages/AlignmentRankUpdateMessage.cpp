#include "AlignmentRankUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlignmentRankUpdateMessage::deserialize(CustomDataInput *input) {
    this->_alignmentRankFunc(input);
    this->_verboseFunc(input);
}

void AlignmentRankUpdateMessage::_alignmentRankFunc(CustomDataInput *input) {
    this->alignmentRank = input->readByte();
    if (this->alignmentRank < 0) {

    }
}

void AlignmentRankUpdateMessage::_verboseFunc(CustomDataInput *input) {
    this->verbose = input->readBoolean();
}
