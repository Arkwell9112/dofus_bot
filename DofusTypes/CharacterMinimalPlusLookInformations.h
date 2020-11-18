#ifndef CHARACTERMINIMALPLUSLOOKINFORMATIONS_H
#define CHARACTERMINIMALPLUSLOOKINFORMATIONS_H

#include "EntityLook.h"
#include "CharacterMinimalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterMinimalPlusLookInformations : public CharacterMinimalInformations {
public:
    EntityLook entityLook;
    int breed = 0;

    void deserialize(CustomDataInput *input);

private:
    void _breedFunc(CustomDataInput *input);
};

#endif