#ifndef BREACHCHARACTERSMESSAGE_H
#define BREACHCHARACTERSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachCharactersMessage : public DeserializeInterface {
public:
    std::vector<double> characters;

    void deserialize(CustomDataInput *input);

private:
    void _charactersFunc(CustomDataInput *input);
};

#endif