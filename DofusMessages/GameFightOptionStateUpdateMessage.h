#ifndef GAMEFIGHTOPTIONSTATEUPDATEMESSAGE_H
#define GAMEFIGHTOPTIONSTATEUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightOptionStateUpdateMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    unsigned int teamId = 2;
    unsigned int option = 3;
    bool state = false;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _teamIdFunc(CustomDataInput *input);

    void _optionFunc(CustomDataInput *input);

    void _stateFunc(CustomDataInput *input);
};

#endif