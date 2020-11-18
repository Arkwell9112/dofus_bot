#include "ExchangeBidPriceMessage.h"
#include "ExchangeBidPriceForSellerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidPriceForSellerMessage::deserialize(CustomDataInput *input) {
    double _val2 = 0;
    ExchangeBidPriceMessage::deserialize(input);
    this->_allIdenticalFunc(input);
    unsigned int _minimalPricesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _minimalPricesLen; _i2++) {
        _val2 = input->readVarUhLong();
        if (_val2 < 0 || _val2 > 9007199254740990) {

        }
        this->minimalPrices.push_back(_val2);
    }
}

void ExchangeBidPriceForSellerMessage::_allIdenticalFunc(CustomDataInput *input) {
    this->allIdentical = input->readBoolean();
}

void ExchangeBidPriceForSellerMessage::_minimalPricesFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->minimalPrices.push_back(_val);
}
