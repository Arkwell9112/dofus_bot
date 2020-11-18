#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSERRORMESSAGE_H
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementSwapPositionsErrorMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif