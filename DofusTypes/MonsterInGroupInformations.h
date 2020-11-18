#ifndef MONSTERINGROUPINFORMATIONS_H
#define MONSTERINGROUPINFORMATIONS_H

#include "MonsterInGroupLightInformations.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MonsterInGroupInformations : public MonsterInGroupLightInformations {
public:
    EntityLook look;

    void deserialize(CustomDataInput *input);

private:
};

#endif