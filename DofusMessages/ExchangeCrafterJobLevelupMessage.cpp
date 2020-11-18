#include "ExchangeCrafterJobLevelupMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCrafterJobLevelupMessage::deserialize(CustomDataInput *input) {
    this->_crafterJobLevelFunc(input);
}

void ExchangeCrafterJobLevelupMessage::_crafterJobLevelFunc(CustomDataInput *input) {
    this->crafterJobLevel = input->readUnsignedByte();
    if (this->crafterJobLevel < 0 || this->crafterJobLevel > 255) {

    }
}
