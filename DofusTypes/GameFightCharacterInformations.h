#ifndef GAMEFIGHTCHARACTERINFORMATIONS_H
#define GAMEFIGHTCHARACTERINFORMATIONS_H

#include "GameFightFighterNamedInformations.h"
#include "ActorAlignmentInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightCharacterInformations : public GameFightFighterNamedInformations {
public:
    unsigned int level = 0;
    ActorAlignmentInformations alignmentInfos;
    int breed = 0;
    bool sex = false;

    void deserialize(CustomDataInput *input);

private:
    void _levelFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);
};

#endif