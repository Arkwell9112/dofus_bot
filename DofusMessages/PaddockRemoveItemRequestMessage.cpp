#include "PaddockRemoveItemRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void PaddockRemoveItemRequestMessage::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
}

void PaddockRemoveItemRequestMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
