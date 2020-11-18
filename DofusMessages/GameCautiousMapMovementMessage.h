#ifndef GAMECAUTIOUSMAPMOVEMENTMESSAGE_H
#define GAMECAUTIOUSMAPMOVEMENTMESSAGE_H

#include "GameMapMovementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameCautiousMapMovementMessage : public GameMapMovementMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif