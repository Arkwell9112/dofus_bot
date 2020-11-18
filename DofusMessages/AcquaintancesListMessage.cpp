#include "AcquaintancesListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AcquaintanceInformation.h"

void AcquaintancesListMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    AcquaintanceInformation _item1;
    unsigned int _acquaintanceListLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _acquaintanceListLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<AcquaintanceInformation *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->acquaintanceList.push_back(_item1);
    }
}

void AcquaintancesListMessage::_acquaintanceListFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    AcquaintanceInformation _item;
    _item.deserialize(input);
    this->acquaintanceList.push_back(_item);
}
