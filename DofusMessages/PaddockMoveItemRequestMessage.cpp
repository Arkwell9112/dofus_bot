#include "PaddockMoveItemRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void PaddockMoveItemRequestMessage::deserialize(CustomDataInput *input) {
    this->_oldCellIdFunc(input);
}

void PaddockMoveItemRequestMessage::_oldCellIdFunc(CustomDataInput *input) {
    this->oldCellId = input->readVarUhShort();
    if (this->oldCellId < 0 || this->oldCellId > 559) {

    }
}
