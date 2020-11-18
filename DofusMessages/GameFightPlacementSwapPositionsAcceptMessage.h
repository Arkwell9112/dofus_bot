#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSACCEPTMESSAGE_H
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSACCEPTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementSwapPositionsAcceptMessage : public DeserializeInterface {
public:
    unsigned int requestId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _requestIdFunc(CustomDataInput *input);
};

#endif