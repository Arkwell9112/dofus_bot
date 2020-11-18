#ifndef GROUPMONSTERSTATICINFORMATIONS_H
#define GROUPMONSTERSTATICINFORMATIONS_H

#include "MonsterInGroupLightInformations.h"
#include "MonsterInGroupInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GroupMonsterStaticInformations : public DeserializeInterface {
public:
    MonsterInGroupLightInformations mainCreatureLightInfos;
    std::vector<MonsterInGroupInformations> underlings;

    void deserialize(CustomDataInput *input);

private:
};

#endif