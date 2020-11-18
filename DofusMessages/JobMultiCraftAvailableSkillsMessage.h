#ifndef JOBMULTICRAFTAVAILABLESKILLSMESSAGE_H
#define JOBMULTICRAFTAVAILABLESKILLSMESSAGE_H

#include "JobAllowMultiCraftRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobMultiCraftAvailableSkillsMessage : public JobAllowMultiCraftRequestMessage {
public:
    double playerId = 0;
    std::vector<unsigned int> skills;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _skillsFunc(CustomDataInput *input);
};

#endif