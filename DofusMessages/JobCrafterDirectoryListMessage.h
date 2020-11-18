#ifndef JOBCRAFTERDIRECTORYLISTMESSAGE_H
#define JOBCRAFTERDIRECTORYLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectoryListEntry.h"

#include <string>
#include <vector>

class JobCrafterDirectoryListMessage : public DeserializeInterface {
public:
    std::vector<JobCrafterDirectoryListEntry> listEntries;

    void deserialize(CustomDataInput *input);

private:
};

#endif