#ifndef PARTYMEMBERGEOPOSITION_H
#define PARTYMEMBERGEOPOSITION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyMemberGeoPosition : public DeserializeInterface {
public:
    unsigned int memberId = 0;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _memberIdFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);

    void _subAreaIdFunc(CustomDataInput *input);
};

#endif