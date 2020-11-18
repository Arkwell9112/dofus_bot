#ifndef GAMEMAPMOVEMENTMESSAGE_H
#define GAMEMAPMOVEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameMapMovementMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> keyMovements;
    int forcedDirection = 0;
    double actorId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _keyMovementsFunc(CustomDataInput *input);

    void _forcedDirectionFunc(CustomDataInput *input);

    void _actorIdFunc(CustomDataInput *input);
};

#endif