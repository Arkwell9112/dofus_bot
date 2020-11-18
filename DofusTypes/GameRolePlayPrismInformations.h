#ifndef GAMEROLEPLAYPRISMINFORMATIONS_H
#define GAMEROLEPLAYPRISMINFORMATIONS_H

#include "PrismInformation.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayPrismInformations : public GameRolePlayActorInformations {
public:
    PrismInformation prism;

    void deserialize(CustomDataInput *input);

private:
};

#endif