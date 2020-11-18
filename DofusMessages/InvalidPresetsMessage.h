#ifndef INVALIDPRESETSMESSAGE_H
#define INVALIDPRESETSMESSAGE_H

#include "PresetsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include <string>
#include <vector>

class InvalidPresetsMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> presetIds;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdsFunc(CustomDataInput *input);
};

#endif