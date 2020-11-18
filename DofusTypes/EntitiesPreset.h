#ifndef ENTITIESPRESET_H
#define ENTITIESPRESET_H

#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class EntitiesPreset : public Preset {
public:
    unsigned int iconId = 0;
    std::vector<unsigned int> entityIds;

    void deserialize(CustomDataInput *input);

private:
    void _iconIdFunc(CustomDataInput *input);

    void _entityIdsFunc(CustomDataInput *input);
};

#endif