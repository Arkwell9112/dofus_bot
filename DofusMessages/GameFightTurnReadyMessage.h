#ifndef GAMEFIGHTTURNREADYMESSAGE_H
#define GAMEFIGHTTURNREADYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightTurnReadyMessage : public DeserializeInterface {
public:
    bool isReady = false;

    void deserialize(CustomDataInput *input);

private:
    void _isReadyFunc(CustomDataInput *input);
};

#endif