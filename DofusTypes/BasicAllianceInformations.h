#ifndef BASICALLIANCEINFORMATIONS_H
#define BASICALLIANCEINFORMATIONS_H

#include "AbstractSocialGroupInfos.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicAllianceInformations : public AbstractSocialGroupInfos {
public:
    unsigned int allianceId = 0;
    std::string allianceTag;

    void deserialize(CustomDataInput *input);

private:
    void _allianceIdFunc(CustomDataInput *input);

    void _allianceTagFunc(CustomDataInput *input);
};

#endif