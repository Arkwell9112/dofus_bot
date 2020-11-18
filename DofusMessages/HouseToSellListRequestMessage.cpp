#include "HouseToSellListRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseToSellListRequestMessage::deserialize(CustomDataInput *input) {
    this->_pageIndexFunc(input);
}

void HouseToSellListRequestMessage::_pageIndexFunc(CustomDataInput *input) {
    this->pageIndex = input->readVarUhShort();
    if (this->pageIndex < 0) {

    }
}
