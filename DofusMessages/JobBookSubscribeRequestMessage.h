#ifndef JOBBOOKSUBSCRIBEREQUESTMESSAGE_H
#define JOBBOOKSUBSCRIBEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobBookSubscribeRequestMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> jobIds;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdsFunc(CustomDataInput *input);
};

#endif