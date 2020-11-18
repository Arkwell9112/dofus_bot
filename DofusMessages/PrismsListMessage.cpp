#include "PrismsListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PrismSubareaEmptyInfo.h"

void PrismsListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    PrismSubareaEmptyInfo _item1;
    unsigned int _prismsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _prismsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<PrismSubareaEmptyInfo *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->prisms.push_back(_item1);
    }
}

void PrismsListMessage::_prismsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    PrismSubareaEmptyInfo _item;
    _item.deserialize(input);
    this->prisms.push_back(_item);
}
