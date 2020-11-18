#include "ExchangeStartOkMountWithOutPaddockMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

void ExchangeStartOkMountWithOutPaddockMessage::deserialize(CustomDataInput *input) {
    MountClientData _item1;
    unsigned int _stabledMountsDescriptionLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _stabledMountsDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->stabledMountsDescription.push_back(_item1);
    }
}