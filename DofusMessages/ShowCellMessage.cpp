#include "ShowCellMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShowCellMessage::deserialize(CustomDataInput *input) {
    this->_sourceIdFunc(input);
    this->_cellIdFunc(input);
}

void ShowCellMessage::_sourceIdFunc(CustomDataInput *input) {
    this->sourceId = input->readDouble();
    if (this->sourceId < -9007199254740990 || this->sourceId > 9007199254740990) {

    }
}

void ShowCellMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
