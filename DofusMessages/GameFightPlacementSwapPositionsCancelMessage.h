#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELMESSAGE_H
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementSwapPositionsCancelMessage : public DeserializeInterface {
public:
    unsigned int requestId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _requestIdFunc(CustomDataInput *input);
};

#endif