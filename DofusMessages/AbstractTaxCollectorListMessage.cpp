#include "TaxCollectorListMessage.h"
#include "AbstractTaxCollectorListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorInformations.h"

void AbstractTaxCollectorListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    TaxCollectorInformations _item1;
    unsigned int _informationsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _informationsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<TaxCollectorInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->informations.push_back(_item1);
    }
}

void AbstractTaxCollectorListMessage::_informationsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    TaxCollectorInformations _item;
    _item.deserialize(input);
    this->informations.push_back(_item);
}
