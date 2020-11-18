#include "StatsPreset.h"
#include "Preset.h"
#include "FullStatsPreset.h"
#include "CharacterCharacteristicForPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FullStatsPreset::deserialize(CustomDataInput *input) {
    CharacterCharacteristicForPreset _item1;
    Preset::deserialize(input);
    unsigned int _statsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _statsLen; _i1++) {
        _item1.deserialize(input);
        this->stats.push_back(_item1);
    }
}