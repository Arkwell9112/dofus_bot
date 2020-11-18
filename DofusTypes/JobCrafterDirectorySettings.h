#ifndef JOBCRAFTERDIRECTORYSETTINGS_H
#define JOBCRAFTERDIRECTORYSETTINGS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobCrafterDirectorySettings : public DeserializeInterface {
public:
    unsigned int jobId = 0;
    unsigned int minLevel = 0;
    bool free = false;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);

    void _minLevelFunc(CustomDataInput *input);

    void _freeFunc(CustomDataInput *input);
};

#endif