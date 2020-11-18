#ifndef GAMEFIGHTSHOWFIGHTERRANDOMSTATICPOSEMESSAGE_H
#define GAMEFIGHTSHOWFIGHTERRANDOMSTATICPOSEMESSAGE_H

#include "GameFightShowFighterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightShowFighterRandomStaticPoseMessage : public GameFightShowFighterMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif