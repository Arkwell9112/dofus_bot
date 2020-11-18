#ifndef SPAWNCHARACTERINFORMATION_H
#define SPAWNCHARACTERINFORMATION_H

#include "SpawnInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpawnCharacterInformation : public SpawnInformation {
public:
    std::string name;
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);
};

#endif