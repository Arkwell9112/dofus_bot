#include "IdolsPresetSaveRequestMessage.h"
#include "IconPresetSaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include "../DofusTypes/IdolsPreset.h"

#include "../DofusTypes/Idol.h"

void IdolsPresetSaveRequestMessage::deserialize(CustomDataInput *input) {
    IconPresetSaveRequestMessage::deserialize(input);
}