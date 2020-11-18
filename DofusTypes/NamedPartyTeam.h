#ifndef NAMEDPARTYTEAM_H
#define NAMEDPARTYTEAM_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NamedPartyTeam : public DeserializeInterface {
public:
    unsigned int teamId = 2;
    std::string partyName;

    void deserialize(CustomDataInput *input);

private:
    void _teamIdFunc(CustomDataInput *input);

    void _partyNameFunc(CustomDataInput *input);
};

#endif