#ifndef FRIENDSPOUSEINFORMATIONS_H
#define FRIENDSPOUSEINFORMATIONS_H

#include "GuildInformations.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendSpouseInformations : public DeserializeInterface {
public:
    unsigned int spouseAccountId = 0;
    double spouseId = 0;
    std::string spouseName;
    unsigned int spouseLevel = 0;
    int breed = 0;
    int sex = 0;
    EntityLook spouseEntityLook;
    GuildInformations guildInfo;
    int alignmentSide = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spouseAccountIdFunc(CustomDataInput *input);

    void _spouseIdFunc(CustomDataInput *input);

    void _spouseNameFunc(CustomDataInput *input);

    void _spouseLevelFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);

    void _alignmentSideFunc(CustomDataInput *input);
};

#endif