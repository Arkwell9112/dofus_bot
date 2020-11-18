#ifndef GAMEROLEPLAYHUMANOIDINFORMATIONS_H
#define GAMEROLEPLAYHUMANOIDINFORMATIONS_H

#include "HumanInformations.h"
#include "GameRolePlayNamedActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayHumanoidInformations : public GameRolePlayNamedActorInformations {
public:
    HumanInformations humanoidInfo;
    unsigned int accountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _accountIdFunc(CustomDataInput *input);
};

#endif