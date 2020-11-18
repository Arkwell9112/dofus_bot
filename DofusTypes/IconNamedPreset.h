#ifndef ICONNAMEDPRESET_H
#define ICONNAMEDPRESET_H

#include "PresetsContainerPreset.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IconNamedPreset : public PresetsContainerPreset {
public:
    unsigned int iconId = 0;
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _iconIdFunc(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);
};

#endif