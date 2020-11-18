#ifndef GUILDINFORMATIONSGENERALMESSAGE_H
#define GUILDINFORMATIONSGENERALMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

#include <string>
#include <vector>

class GuildInformationsGeneralMessage : public DeserializeInterface {
public:
    bool abandonnedPaddock = false;
    unsigned int level = 0;
    double expLevelFloor = 0;
    double experience = 0;
    double expNextLevelFloor = 0;
    unsigned int creationDate = 0;
    unsigned int nbTotalMembers = 0;
    unsigned int nbConnectedMembers = 0;

    void deserialize(CustomDataInput *input);

private:
    void _abandonnedPaddockFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _expLevelFloorFunc(CustomDataInput *input);

    void _experienceFunc(CustomDataInput *input);

    void _expNextLevelFloorFunc(CustomDataInput *input);

    void _creationDateFunc(CustomDataInput *input);

    void _nbTotalMembersFunc(CustomDataInput *input);

    void _nbConnectedMembersFunc(CustomDataInput *input);
};

#endif