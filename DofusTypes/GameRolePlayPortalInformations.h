#ifndef GAMEROLEPLAYPORTALINFORMATIONS_H
#define GAMEROLEPLAYPORTALINFORMATIONS_H

#include "PortalInformation.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayPortalInformations : public GameRolePlayActorInformations {
public:
    PortalInformation portal;

    void deserialize(CustomDataInput *input);

private:
};

#endif