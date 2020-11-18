#ifndef CHARACTERBASEINFORMATIONS_H
#define CHARACTERBASEINFORMATIONS_H

#include "CharacterMinimalPlusLookInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterBaseInformations : public CharacterMinimalPlusLookInformations {
public:
    bool sex = false;

    void deserialize(CustomDataInput *input);

private:
    void _sexFunc(CustomDataInput *input);
};

#endif