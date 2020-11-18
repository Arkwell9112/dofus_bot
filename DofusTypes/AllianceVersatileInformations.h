#ifndef ALLIANCEVERSATILEINFORMATIONS_H
#define ALLIANCEVERSATILEINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceVersatileInformations : public DeserializeInterface {
public:
    unsigned int allianceId = 0;
    unsigned int nbGuilds = 0;
    unsigned int nbMembers = 0;
    unsigned int nbSubarea = 0;

    void deserialize(CustomDataInput *input);

private:
    void _allianceIdFunc(CustomDataInput *input);

    void _nbGuildsFunc(CustomDataInput *input);

    void _nbMembersFunc(CustomDataInput *input);

    void _nbSubareaFunc(CustomDataInput *input);
};

#endif