#include "ShowCellRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShowCellRequestMessage::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
}

void ShowCellRequestMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
