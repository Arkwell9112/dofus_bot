#ifndef CHARACTERHARDCOREOREPICINFORMATIONS_H
#define CHARACTERHARDCOREOREPICINFORMATIONS_H

#include "CharacterBaseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterHardcoreOrEpicInformations : public CharacterBaseInformations {
public:
    unsigned int deathState = 0;
    unsigned int deathCount = 0;
    unsigned int deathMaxLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _deathStateFunc(CustomDataInput *input);

    void _deathCountFunc(CustomDataInput *input);

    void _deathMaxLevelFunc(CustomDataInput *input);
};

#endif