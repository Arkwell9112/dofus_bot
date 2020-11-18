#ifndef CHARACTERMINIMALGUILDPUBLICINFORMATIONS_H
#define CHARACTERMINIMALGUILDPUBLICINFORMATIONS_H

#include "CharacterMinimalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterMinimalGuildPublicInformations : public CharacterMinimalInformations {
public:
    unsigned int rank = 0;

    void deserialize(CustomDataInput *input);

private:
    void _rankFunc(CustomDataInput *input);
};

#endif