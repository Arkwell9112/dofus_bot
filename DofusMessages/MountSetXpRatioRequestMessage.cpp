#include "MountSetXpRatioRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountSetXpRatioRequestMessage::deserialize(CustomDataInput *input) {
    this->_xpRatioFunc(input);
}

void MountSetXpRatioRequestMessage::_xpRatioFunc(CustomDataInput *input) {
    this->xpRatio = input->readByte();
    if (this->xpRatio < 0) {

    }
}
