#ifndef PRESETSCONTAINERPRESET_H
#define PRESETSCONTAINERPRESET_H

#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PresetsContainerPreset : public Preset {
public:
    std::vector<Preset> presets;

    void deserialize(CustomDataInput *input);

private:
    void _presetsFunc(CustomDataInput *input);
};

#endif