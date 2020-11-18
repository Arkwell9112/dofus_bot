#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELLEDMESSAGE_H
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELLEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementSwapPositionsCancelledMessage : public DeserializeInterface {
public:
    unsigned int requestId = 0;
    double cancellerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _requestIdFunc(CustomDataInput *input);

    void _cancellerIdFunc(CustomDataInput *input);
};

#endif