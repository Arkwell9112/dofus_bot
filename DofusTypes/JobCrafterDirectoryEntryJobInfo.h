#ifndef JOBCRAFTERDIRECTORYENTRYJOBINFO_H
#define JOBCRAFTERDIRECTORYENTRYJOBINFO_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobCrafterDirectoryEntryJobInfo : public DeserializeInterface {
public:
    unsigned int jobId = 0;
    unsigned int jobLevel = 0;
    bool free = false;
    unsigned int minLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);

    void _jobLevelFunc(CustomDataInput *input);

    void _freeFunc(CustomDataInput *input);

    void _minLevelFunc(CustomDataInput *input);
};

#endif