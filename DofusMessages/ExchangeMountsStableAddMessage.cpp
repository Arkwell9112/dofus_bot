#include "ExchangeMountsStableAddMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

void ExchangeMountsStableAddMessage::deserialize(CustomDataInput *input) {
    MountClientData _item1;
    unsigned int _mountDescriptionLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _mountDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->mountDescription.push_back(_item1);
    }
}