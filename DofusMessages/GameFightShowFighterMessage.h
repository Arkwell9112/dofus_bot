#ifndef GAMEFIGHTSHOWFIGHTERMESSAGE_H
#define GAMEFIGHTSHOWFIGHTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameFightFighterInformations.h"

#include <string>
#include <vector>

class GameFightShowFighterMessage : public DeserializeInterface {
public:
    GameFightFighterInformations informations;

    void deserialize(CustomDataInput *input);

private:
};

#endif