#ifndef GROUPMONSTERSTATICINFORMATIONSWITHALTERNATIVES_H
#define GROUPMONSTERSTATICINFORMATIONSWITHALTERNATIVES_H

#include "GroupMonsterStaticInformations.h"
#include "AlternativeMonstersInGroupLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GroupMonsterStaticInformationsWithAlternatives : public GroupMonsterStaticInformations {
public:
    std::vector<AlternativeMonstersInGroupLightInformations> alternatives;

    void deserialize(CustomDataInput *input);

private:
};

#endif