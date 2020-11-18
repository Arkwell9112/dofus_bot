#include "TaxCollectorListMessage.h"
#include "AbstractTaxCollectorListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorFightersInformation.h"

void TaxCollectorListMessage::deserialize(CustomDataInput *input) {
    TaxCollectorFightersInformation _item2;
    AbstractTaxCollectorListMessage::deserialize(input);
    this->_nbcollectorMaxFunc(input);
    unsigned int _fightersInformationsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _fightersInformationsLen; _i2++) {
        _item2.deserialize(input);
        this->fightersInformations.push_back(_item2);
    }
    this->_infoTypeFunc(input);
}

void TaxCollectorListMessage::_nbcollectorMaxFunc(CustomDataInput *input) {
    this->nbcollectorMax = input->readByte();
    if (this->nbcollectorMax < 0) {

    }
}

void TaxCollectorListMessage::_infoTypeFunc(CustomDataInput *input) {
    this->infoType = input->readByte();
    if (this->infoType < 0) {

    }
}
