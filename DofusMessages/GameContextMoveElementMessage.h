#ifndef GAMECONTEXTMOVEELEMENTMESSAGE_H
#define GAMECONTEXTMOVEELEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityMovementInformations.h"

#include <string>
#include <vector>

class GameContextMoveElementMessage : public DeserializeInterface {
public:
    EntityMovementInformations movement;

    void deserialize(CustomDataInput *input);

private:
};

#endif