#ifndef GAMEROLEPLAYSHOWACTORMESSAGE_H
#define GAMEROLEPLAYSHOWACTORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameRolePlayActorInformations.h"

#include <string>
#include <vector>

class GameRolePlayShowActorMessage : public DeserializeInterface {
public:
    GameRolePlayActorInformations informations;

    void deserialize(CustomDataInput *input);

private:
};

#endif