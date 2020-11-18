#ifndef GAMEROLEPLAYCHARACTERINFORMATIONS_H
#define GAMEROLEPLAYCHARACTERINFORMATIONS_H

#include "GameRolePlayHumanoidInformations.h"
#include "ActorAlignmentInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayCharacterInformations : public GameRolePlayHumanoidInformations {
public:
    ActorAlignmentInformations alignmentInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif