#include "LifePointsRegenBeginMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LifePointsRegenBeginMessage::deserialize(CustomDataInput *input) {
    this->_regenRateFunc(input);
}

void LifePointsRegenBeginMessage::_regenRateFunc(CustomDataInput *input) {
    this->regenRate = input->readUnsignedByte();
    if (this->regenRate < 0 || this->regenRate > 255) {

    }
}
