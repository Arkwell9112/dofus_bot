#include "PresetUseResultWithMissingIdsMessage.h"
#include "PresetUseResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetUseResultWithMissingIdsMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    PresetUseResultMessage::deserialize(input);
    unsigned int _missingIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _missingIdsLen; _i1++) {
        _val1 = input->readVarUhShort();
        if (_val1 < 0) {

        }
        this->missingIds.push_back(_val1);
    }
}

void PresetUseResultWithMissingIdsMessage::_missingIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->missingIds.push_back(_val);
}
