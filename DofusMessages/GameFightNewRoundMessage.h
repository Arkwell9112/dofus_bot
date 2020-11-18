#ifndef GAMEFIGHTNEWROUNDMESSAGE_H
#define GAMEFIGHTNEWROUNDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightNewRoundMessage : public DeserializeInterface {
public:
    unsigned int roundNumber = 0;

    void deserialize(CustomDataInput *input);

private:
    void _roundNumberFunc(CustomDataInput *input);
};

#endif