#include "AlignmentWarEffortDonatePreviewMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AlignmentWarEffortDonatePreviewMessage::deserialize(CustomDataInput *input) {
    this->_xpFunc(input);
}

void AlignmentWarEffortDonatePreviewMessage::_xpFunc(CustomDataInput *input) {
    this->xp = input->readDouble();
    if (this->xp < -9007199254740990 || this->xp > 9007199254740990) {

    }
}
