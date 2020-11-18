#include "PrismFightStateUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismFightStateUpdateMessage::deserialize(CustomDataInput *input) {
    this->_stateFunc(input);
}

void PrismFightStateUpdateMessage::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
    if (this->state < 0) {

    }
}
