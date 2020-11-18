#ifndef IDOLSPRESET_H
#define IDOLSPRESET_H

#include "Preset.h"
#include "Idol.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IdolsPreset : public Preset {
public:
    unsigned int iconId = 0;
    std::vector<unsigned int> idolIds;

    void deserialize(CustomDataInput *input);

private:
    void _iconIdFunc(CustomDataInput *input);

    void _idolIdsFunc(CustomDataInput *input);
};

#endif