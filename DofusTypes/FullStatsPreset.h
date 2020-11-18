#ifndef FULLSTATSPRESET_H
#define FULLSTATSPRESET_H

#include "StatsPreset.h"
#include "Preset.h"
#include "CharacterCharacteristicForPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FullStatsPreset : public Preset {
public:
    std::vector<CharacterCharacteristicForPreset> stats;

    void deserialize(CustomDataInput *input);

private:
};

#endif