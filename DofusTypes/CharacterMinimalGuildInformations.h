#ifndef CHARACTERMINIMALGUILDINFORMATIONS_H
#define CHARACTERMINIMALGUILDINFORMATIONS_H

#include "GuildInformations.h"
#include "CharacterMinimalPlusLookInformations.h"
#include "BasicGuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterMinimalGuildInformations : public CharacterMinimalPlusLookInformations {
public:
    BasicGuildInformations guild;

    void deserialize(CustomDataInput *input);

private:
};

#endif