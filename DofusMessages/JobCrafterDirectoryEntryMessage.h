#ifndef JOBCRAFTERDIRECTORYENTRYMESSAGE_H
#define JOBCRAFTERDIRECTORYENTRYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectoryEntryPlayerInfo.h"

#include "../DofusTypes/JobCrafterDirectoryEntryJobInfo.h"

#include "../DofusTypes/EntityLook.h"

#include <string>
#include <vector>

class JobCrafterDirectoryEntryMessage : public DeserializeInterface {
public:
    JobCrafterDirectoryEntryPlayerInfo playerInfo;
    std::vector<JobCrafterDirectoryEntryJobInfo> jobInfoList;
    EntityLook playerLook;

    void deserialize(CustomDataInput *input);

private:
};

#endif