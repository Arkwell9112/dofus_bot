#ifndef PRESETSMESSAGE_H
#define PRESETSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class PresetsMessage : public DeserializeInterface {
public:
    std::vector<Preset> presets;

    void deserialize(CustomDataInput *input);

private:
    void _presetsFunc(CustomDataInput *input);
};

#endif