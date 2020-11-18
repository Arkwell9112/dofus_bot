#include "IgnoredListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/IgnoredInformations.h"

void IgnoredListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    IgnoredInformations _item1;
    unsigned int _ignoredListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _ignoredListLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<IgnoredInformations *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->ignoredList.push_back(_item1);
    }
}

void IgnoredListMessage::_ignoredListFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    IgnoredInformations _item;
    _item.deserialize(input);
    this->ignoredList.push_back(_item);
}
