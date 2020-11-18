#ifndef JOBDESCRIPTIONMESSAGE_H
#define JOBDESCRIPTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobDescription.h"

#include <string>
#include <vector>

class JobDescriptionMessage : public DeserializeInterface {
public:
    std::vector<JobDescription> jobsDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif