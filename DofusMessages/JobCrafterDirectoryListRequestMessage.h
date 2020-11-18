#ifndef JOBCRAFTERDIRECTORYLISTREQUESTMESSAGE_H
#define JOBCRAFTERDIRECTORYLISTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobCrafterDirectoryListRequestMessage : public DeserializeInterface {
public:
    unsigned int jobId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);
};

#endif