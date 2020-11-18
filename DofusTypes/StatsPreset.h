#ifndef STATSPRESET_H
#define STATSPRESET_H

#include "SimpleCharacterCharacteristicForPreset.h"
#include "Preset.h"
#include "CharacterCharacteristicForPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StatsPreset : public Preset {
public:
    std::vector<SimpleCharacterCharacteristicForPreset> stats;

    void deserialize(CustomDataInput *input);

private:
};

#endif