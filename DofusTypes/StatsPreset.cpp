#include "StatsPreset.h"
#include "SimpleCharacterCharacteristicForPreset.h"
#include "Preset.h"
#include "CharacterCharacteristicForPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatsPreset::deserialize(CustomDataInput *input) {
    SimpleCharacterCharacteristicForPreset _item1;
    Preset::deserialize(input);
    unsigned int _statsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _statsLen; _i1++) {
        _item1.deserialize(input);
        this->stats.push_back(_item1);
    }
}