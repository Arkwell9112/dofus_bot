#ifndef GAMEFIGHTPLACEMENTPOSITIONREQUESTMESSAGE_H
#define GAMEFIGHTPLACEMENTPOSITIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightPlacementPositionRequestMessage : public DeserializeInterface {
public:
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);
};

#endif