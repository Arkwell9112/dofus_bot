#ifndef PRESETDELETEREQUESTMESSAGE_H
#define PRESETDELETEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class PresetDeleteRequestMessage : public DeserializeInterface {
public:
    int presetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);
};

#endif