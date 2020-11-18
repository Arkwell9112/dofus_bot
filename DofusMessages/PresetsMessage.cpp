#include "PresetsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id1 = 0;
    Preset _item1;
    unsigned int _presetsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _presetsLen; _i1++) {
        _id1 = input->readUnsignedShort();
        _item1 = *dynamic_cast<Preset *>(ProtocolTypeManager::getInstance(_id1, input));
        ProtocolTypeManager::deleteLastInstance();

        this->presets.push_back(_item1);
    }
}

void PresetsMessage::_presetsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    Preset _item;
    _item.deserialize(input);
    this->presets.push_back(_item);
}
