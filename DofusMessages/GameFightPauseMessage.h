#ifndef GAMEFIGHTPAUSEMESSAGE_H
#define GAMEFIGHTPAUSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPauseMessage : public DeserializeInterface {
public:
    bool isPaused = false;

    void deserialize(CustomDataInput *input);

private:
    void _isPausedFunc(CustomDataInput *input);
};

#endif