#include "BasicStatWithDataMessage.h"
#include "BasicStatMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StatisticData.h"

void BasicStatWithDataMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    StatisticData _item1;
    BasicStatMessage::deserialize(input);
    unsigned int _datasLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _datasLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<StatisticData *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->datas.push_back(_item1);
    }
}

void BasicStatWithDataMessage::_datasFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    StatisticData _item;
    _item.deserialize(input);
    this->datas.push_back(_item);
}
