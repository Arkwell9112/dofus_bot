#include "PaddockToSellListRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockToSellListRequestMessage::deserialize(CustomDataInput *input) {
    this->_pageIndexFunc(input);
}

void PaddockToSellListRequestMessage::_pageIndexFunc(CustomDataInput *input) {
    this->pageIndex = input->readVarUhShort();
    if (this->pageIndex < 0) {

    }
}
