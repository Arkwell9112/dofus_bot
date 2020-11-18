#ifndef FIGHTLOOT_H
#define FIGHTLOOT_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightLoot : public DeserializeInterface {
public:
    std::vector<unsigned int> objects;
    double kamas = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectsFunc(CustomDataInput *input);

    void _kamasFunc(CustomDataInput *input);
};

#endif