#include "PresetsMessage.h"
#include "InvalidPresetsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void InvalidPresetsMessage::deserialize(CustomDataInput *input) {
    unsigned int _val1 = 0;
    unsigned int _presetIdsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _presetIdsLen; _i1++) {
        _val1 = input->readShort();
        if (_val1 < 0) {

        }
        this->presetIds.push_back(_val1);
    }
}

void InvalidPresetsMessage::_presetIdsFunc(CustomDataInput *input) {
    unsigned int _val = input->readShort();
    if (_val < 0) {

    }
    this->presetIds.push_back(_val);
}
