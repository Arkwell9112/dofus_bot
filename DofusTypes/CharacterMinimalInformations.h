#ifndef CHARACTERMINIMALINFORMATIONS_H
#define CHARACTERMINIMALINFORMATIONS_H

#include "CharacterBasicMinimalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterMinimalInformations : public CharacterBasicMinimalInformations {
public:
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _levelFunc(CustomDataInput *input);
};

#endif