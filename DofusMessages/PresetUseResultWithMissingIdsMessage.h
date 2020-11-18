#ifndef PRESETUSERESULTWITHMISSINGIDSMESSAGE_H
#define PRESETUSERESULTWITHMISSINGIDSMESSAGE_H

#include "PresetUseResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class PresetUseResultWithMissingIdsMessage : public PresetUseResultMessage {
public:
    std::vector<unsigned int> missingIds;

    void deserialize(CustomDataInput *input);

private:
    void _missingIdsFunc(CustomDataInput *input);
};

#endif