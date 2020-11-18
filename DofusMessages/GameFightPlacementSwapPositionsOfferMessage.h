#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSOFFERMESSAGE_H
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSOFFERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementSwapPositionsOfferMessage : public DeserializeInterface {
public:
    unsigned int requestId = 0;
    double requesterId = 0;
    unsigned int requesterCellId = 0;
    double requestedId = 0;
    unsigned int requestedCellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _requestIdFunc(CustomDataInput *input);

    void _requesterIdFunc(CustomDataInput *input);

    void _requesterCellIdFunc(CustomDataInput *input);

    void _requestedIdFunc(CustomDataInput *input);

    void _requestedCellIdFunc(CustomDataInput *input);
};

#endif