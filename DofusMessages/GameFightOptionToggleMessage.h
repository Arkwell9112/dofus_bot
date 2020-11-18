#ifndef GAMEFIGHTOPTIONTOGGLEMESSAGE_H
#define GAMEFIGHTOPTIONTOGGLEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightOptionToggleMessage : public DeserializeInterface {
public:
    unsigned int option = 3;

    void deserialize(CustomDataInput *input);

private:
    void _optionFunc(CustomDataInput *input);
};

#endif