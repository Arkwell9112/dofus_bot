#ifndef PARTYMEMBERARENAINFORMATIONS_H
#define PARTYMEMBERARENAINFORMATIONS_H

#include "PartyMemberInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PartyMemberArenaInformations : public PartyMemberInformations {
public:
    unsigned int rank = 0;

    void deserialize(CustomDataInput *input);

private:
    void _rankFunc(CustomDataInput *input);
};

#endif