#include "AllianceVersatileInfoListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AllianceVersatileInformations.h"

void AllianceVersatileInfoListMessage::deserialize(CustomDataInput *input) {
    AllianceVersatileInformations _item1;
    unsigned int _alliancesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alliancesLen; _i1++) {
        _item1.deserialize(input);
        this->alliances.push_back(_item1);
    }
}