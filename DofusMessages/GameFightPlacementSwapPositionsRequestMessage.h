#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSREQUESTMESSAGE_H
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSREQUESTMESSAGE_H

#include "GameFightPlacementPositionRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementSwapPositionsRequestMessage : public GameFightPlacementPositionRequestMessage {
public:
    double requestedId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _requestedIdFunc(CustomDataInput *input);
};

#endif