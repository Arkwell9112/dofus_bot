#ifndef JOBCRAFTERDIRECTORYREMOVEMESSAGE_H
#define JOBCRAFTERDIRECTORYREMOVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobCrafterDirectoryRemoveMessage : public DeserializeInterface {
public:
    unsigned int jobId = 0;
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);

    void _playerIdFunc(CustomDataInput *input);
};

#endif