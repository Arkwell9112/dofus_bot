#include "TreasureHuntShowLegendaryUIMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntShowLegendaryUIMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _availableLegendaryIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _availableLegendaryIdsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->availableLegendaryIds.push_back(_val1);
    }
}

void TreasureHuntShowLegendaryUIMessage::_availableLegendaryIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->availableLegendaryIds.push_back(_val);
}
