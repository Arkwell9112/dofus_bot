#ifndef PRESETSAVEDMESSAGE_H
#define PRESETSAVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class PresetSavedMessage : public DeserializeInterface {
public:
    int presetId = 0;
    Preset preset;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);
};

#endif