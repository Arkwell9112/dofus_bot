#ifndef GAMEROLEPLAYNAMEDACTORINFORMATIONS_H
#define GAMEROLEPLAYNAMEDACTORINFORMATIONS_H

#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayNamedActorInformations : public GameRolePlayActorInformations {
public:
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);
};

#endif