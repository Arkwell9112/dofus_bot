#include "GameFightPlacementSwapPositionsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPlacementSwapPositionsMessage::deserialize(CustomDataInput *input) {
    for (unsigned int _i1 = 0; _i1 < 2; _i1++) {
        this->dispositions[_i1].deserialize(input);
    }
}