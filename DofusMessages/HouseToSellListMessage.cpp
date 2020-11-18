#include "HouseToSellListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformationsForSell.h"

#include "../DofusTypes/HouseInformations.h"

void HouseToSellListMessage::deserialize(CustomDataInput *input) {
    HouseInformationsForSell _item3;
    this->_pageIndexFunc(input);
    this->_totalPageFunc(input);
    unsigned int _houseListLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _houseListLen; _i3++) {
        _item3.deserialize(input);
        this->houseList.push_back(_item3);
    }
}

void HouseToSellListMessage::_pageIndexFunc(CustomDataInput *input) {
    this->pageIndex = input->readVarUhShort();
    if (this->pageIndex < 0) {

    }
}

void HouseToSellListMessage::_totalPageFunc(CustomDataInput *input) {
    this->totalPage = input->readVarUhShort();
    if (this->totalPage < 0) {

    }
}
