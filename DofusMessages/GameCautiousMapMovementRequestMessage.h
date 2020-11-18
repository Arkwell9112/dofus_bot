#ifndef GAMECAUTIOUSMAPMOVEMENTREQUESTMESSAGE_H
#define GAMECAUTIOUSMAPMOVEMENTREQUESTMESSAGE_H

#include "GameMapMovementRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameCautiousMapMovementRequestMessage : public GameMapMovementRequestMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif