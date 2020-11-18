#include "MountXpRatioMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountXpRatioMessage::deserialize(CustomDataInput *input) {
    this->_ratioFunc(input);
}

void MountXpRatioMessage::_ratioFunc(CustomDataInput *input) {
    this->ratio = input->readByte();
    if (this->ratio < 0) {

    }
}
