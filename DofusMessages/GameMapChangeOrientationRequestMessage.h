#ifndef GAMEMAPCHANGEORIENTATIONREQUESTMESSAGE_H
#define GAMEMAPCHANGEORIENTATIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameMapChangeOrientationRequestMessage : public DeserializeInterface {
public:
    unsigned int direction = 1;

    void deserialize(CustomDataInput *input);

private:
    void _directionFunc(CustomDataInput *input);
};

#endif