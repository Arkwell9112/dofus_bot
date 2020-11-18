#ifndef JOBCRAFTERDIRECTORYADDMESSAGE_H
#define JOBCRAFTERDIRECTORYADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectoryListEntry.h"

#include <string>
#include <vector>

class JobCrafterDirectoryAddMessage : public DeserializeInterface {
public:
    JobCrafterDirectoryListEntry listEntry;

    void deserialize(CustomDataInput *input);

private:
};

#endif