#include "AccountHouseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformations.h"

#include "../DofusTypes/AccountHouseInformations.h"

void AccountHouseMessage::deserialize(CustomDataInput *input) {
    AccountHouseInformations _item1;
    unsigned int _housesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _housesLen; _i1++) {
        _item1.deserialize(input);
        this->houses.push_back(_item1);
    }
}