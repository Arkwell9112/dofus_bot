#include "AllianceListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AllianceFactSheetInformations.h"

void AllianceListMessage::deserialize(CustomDataInput *input) {
    AllianceFactSheetInformations _item1;
    unsigned int _alliancesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alliancesLen; _i1++) {
        _item1.deserialize(input);
        this->alliances.push_back(_item1);
    }
}