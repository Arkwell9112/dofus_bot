#include "TeleportOnSameMapMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportOnSameMapMessage::deserialize(CustomDataInput *input) {
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void TeleportOnSameMapMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void TeleportOnSameMapMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
