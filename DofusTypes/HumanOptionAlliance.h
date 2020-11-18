#ifndef HUMANOPTIONALLIANCE_H
#define HUMANOPTIONALLIANCE_H

#include "HumanOption.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionAlliance : public HumanOption {
public:
    AllianceInformations allianceInformations;
    unsigned int aggressable = 0;

    void deserialize(CustomDataInput *input);

private:
    void _aggressableFunc(CustomDataInput *input);
};

#endif