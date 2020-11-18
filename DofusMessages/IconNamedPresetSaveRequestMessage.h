#ifndef ICONNAMEDPRESETSAVEREQUESTMESSAGE_H
#define ICONNAMEDPRESETSAVEREQUESTMESSAGE_H

#include "IconPresetSaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include "../DofusTypes/IconNamedPreset.h"

#include <string>
#include <vector>

class IconNamedPresetSaveRequestMessage : public IconPresetSaveRequestMessage {
public:
    std::string name;
    unsigned int type = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _typeFunc(CustomDataInput *input);
};

#endif