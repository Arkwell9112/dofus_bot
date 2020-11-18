#ifndef GAMEMAPMOVEMENTREQUESTMESSAGE_H
#define GAMEMAPMOVEMENTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameMapMovementRequestMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> keyMovements;
    double mapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _keyMovementsFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);
};

#endif