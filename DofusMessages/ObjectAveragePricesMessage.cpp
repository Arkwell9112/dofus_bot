#include "ObjectAveragePricesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectAveragePricesMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    double _val2 = 0;
    unsigned int _idsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->ids.push_back(_val1);
    }
    unsigned int _avgPricesLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _avgPricesLen; _i2++) {
        _val2 = input->readVarUhLong();
        if (_val2 < 0 || _val2 > 9007199254740990) {

        }
        this->avgPrices.push_back(_val2);
    }
}

void ObjectAveragePricesMessage::_idsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->ids.push_back(_val);
}

void ObjectAveragePricesMessage::_avgPricesFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->avgPrices.push_back(_val);
}
