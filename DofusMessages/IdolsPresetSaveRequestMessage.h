#ifndef IDOLSPRESETSAVEREQUESTMESSAGE_H
#define IDOLSPRESETSAVEREQUESTMESSAGE_H

#include "IconPresetSaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include "../DofusTypes/IdolsPreset.h"

#include "../DofusTypes/Idol.h"

#include <string>
#include <vector>

class IdolsPresetSaveRequestMessage : public IconPresetSaveRequestMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif