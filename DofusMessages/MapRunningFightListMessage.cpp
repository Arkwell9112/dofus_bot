#include "MapRunningFightListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FightExternalInformations.h"

void MapRunningFightListMessage::deserialize(CustomDataInput *input) {
    FightExternalInformations _item1;
    unsigned int _fightsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _fightsLen; _i1++) {
        _item1.deserialize(input);
        this->fights.push_back(_item1);
    }
}