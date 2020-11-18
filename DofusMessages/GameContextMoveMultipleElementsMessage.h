#ifndef GAMECONTEXTMOVEMULTIPLEELEMENTSMESSAGE_H
#define GAMECONTEXTMOVEMULTIPLEELEMENTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/EntityMovementInformations.h"

#include <string>
#include <vector>

class GameContextMoveMultipleElementsMessage : public DeserializeInterface {
public:
    std::vector<EntityMovementInformations> movements;

    void deserialize(CustomDataInput *input);

private:
};

#endif