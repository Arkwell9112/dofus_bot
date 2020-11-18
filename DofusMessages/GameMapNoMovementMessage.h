#ifndef GAMEMAPNOMOVEMENTMESSAGE_H
#define GAMEMAPNOMOVEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameMapNoMovementMessage : public DeserializeInterface {
public:
    int cellX = 0;
    int cellY = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellXFunc(CustomDataInput *input);

    void _cellYFunc(CustomDataInput *input);
};

#endif