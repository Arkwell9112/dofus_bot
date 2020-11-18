#ifndef GAMEFIGHTTURNSTARTPLAYINGMESSAGE_H
#define GAMEFIGHTTURNSTARTPLAYINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnStartPlayingMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif