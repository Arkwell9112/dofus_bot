#ifndef GAMEFIGHTREFRESHFIGHTERMESSAGE_H
#define GAMEFIGHTREFRESHFIGHTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameContextActorInformations.h"

#include <string>
#include <vector>

class GameFightRefreshFighterMessage : public DeserializeInterface {
public:
    GameContextActorInformations informations;

    void deserialize(CustomDataInput *input);

private:
};

#endif