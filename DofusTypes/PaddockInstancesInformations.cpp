#include "PaddockInstancesInformations.h"
#include "PaddockInformations.h"
#include "PaddockBuyableInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockInstancesInformations::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    PaddockBuyableInformations _item1;
    PaddockInformations::deserialize(input);
    unsigned int _paddocksLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _paddocksLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<PaddockBuyableInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->paddocks.push_back(_item1);
    }
}

void PaddockInstancesInformations::_paddocksFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    PaddockBuyableInformations _item;
    _item.deserialize(input);
    this->paddocks.push_back(_item);
}
