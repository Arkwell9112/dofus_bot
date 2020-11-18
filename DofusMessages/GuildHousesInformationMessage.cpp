#include "GuildHousesInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformationsForGuild.h"

#include "../DofusTypes/HouseInformations.h"

void GuildHousesInformationMessage::deserialize(CustomDataInput *input) {
    HouseInformationsForGuild _item1;
    unsigned int _housesInformationsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _housesInformationsLen; _i1++) {
        _item1.deserialize(input);
        this->housesInformations.push_back(_item1);
    }
}