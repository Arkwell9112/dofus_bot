#ifndef GAMECONTEXTREADYMESSAGE_H
#define GAMECONTEXTREADYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameContextReadyMessage : public DeserializeInterface {
public:
    double mapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);
};

#endif