#ifndef JOBCRAFTERDIRECTORYENTRYREQUESTMESSAGE_H
#define JOBCRAFTERDIRECTORYENTRYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobCrafterDirectoryEntryRequestMessage : public DeserializeInterface {
public:
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);
};

#endif