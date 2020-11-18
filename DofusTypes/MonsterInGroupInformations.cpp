#include "MonsterInGroupLightInformations.h"
#include "MonsterInGroupInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MonsterInGroupInformations::deserialize(CustomDataInput *input) {
    MonsterInGroupLightInformations::deserialize(input);
    this->look.deserialize(input);
}