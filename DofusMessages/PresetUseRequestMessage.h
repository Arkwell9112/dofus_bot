#ifndef PRESETUSEREQUESTMESSAGE_H
#define PRESETUSEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class PresetUseRequestMessage : public DeserializeInterface {
public:
    int presetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);
};

#endif