#include "RecycleResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void RecycleResultMessage::deserialize(CustomDataInput *input) {
    this->_nuggetsForPrismFunc(input);
    this->_nuggetsForPlayerFunc(input);
}

void RecycleResultMessage::_nuggetsForPrismFunc(CustomDataInput *input) {
    this->nuggetsForPrism = input->readVarUhInt();
    if (this->nuggetsForPrism < 0) {

    }
}

void RecycleResultMessage::_nuggetsForPlayerFunc(CustomDataInput *input) {
    this->nuggetsForPlayer = input->readVarUhInt();
    if (this->nuggetsForPlayer < 0) {

    }
}
