#ifndef GAMEFIGHTJOINREQUESTMESSAGE_H
#define GAMEFIGHTJOINREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightJoinRequestMessage : public DeserializeInterface {
public:
    double fighterId = 0;
    unsigned int fightId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _fighterIdFunc(CustomDataInput *input);

    void _fightIdFunc(CustomDataInput *input);
};

#endif