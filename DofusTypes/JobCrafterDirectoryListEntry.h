#ifndef JOBCRAFTERDIRECTORYLISTENTRY_H
#define JOBCRAFTERDIRECTORYLISTENTRY_H

#include "JobCrafterDirectoryEntryPlayerInfo.h"
#include "JobCrafterDirectoryEntryJobInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobCrafterDirectoryListEntry : public DeserializeInterface {
public:
    JobCrafterDirectoryEntryPlayerInfo playerInfo;
    JobCrafterDirectoryEntryJobInfo jobInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif