#ifndef BASICNAMEDALLIANCEINFORMATIONS_H
#define BASICNAMEDALLIANCEINFORMATIONS_H

#include "BasicAllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicNamedAllianceInformations : public BasicAllianceInformations {
public:
    std::string allianceName;

    void deserialize(CustomDataInput *input);

private:
    void _allianceNameFunc(CustomDataInput *input);
};

#endif