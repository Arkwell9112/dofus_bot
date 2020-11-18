#include "ExchangeStartOkMountWithOutPaddockMessage.h"
#include "ExchangeStartOkMountMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

void ExchangeStartOkMountMessage::deserialize(CustomDataInput *input) {
    MountClientData _item1;
    ExchangeStartOkMountWithOutPaddockMessage::deserialize(input);
    unsigned int _paddockedMountsDescriptionLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _paddockedMountsDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->paddockedMountsDescription.push_back(_item1);
    }
}