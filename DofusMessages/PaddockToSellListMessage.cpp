#include "PaddockToSellListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockInformationsForSell.h"

#include "../DofusTypes/PaddockInformations.h"

void PaddockToSellListMessage::deserialize(CustomDataInput *input) {
    PaddockInformationsForSell _item3;
    this->_pageIndexFunc(input);
    this->_totalPageFunc(input);
    unsigned int _paddockListLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _paddockListLen; _i3++) {
        _item3.deserialize(input);
        this->paddockList.push_back(_item3);
    }
}

void PaddockToSellListMessage::_pageIndexFunc(CustomDataInput *input) {
    this->pageIndex = input->readVarUhShort();
    if (this->pageIndex < 0) {

    }
}

void PaddockToSellListMessage::_totalPageFunc(CustomDataInput *input) {
    this->totalPage = input->readVarUhShort();
    if (this->totalPage < 0) {

    }
}
