#ifndef JOBEXPERIENCEMULTIUPDATEMESSAGE_H
#define JOBEXPERIENCEMULTIUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobExperience.h"

#include <string>
#include <vector>

class JobExperienceMultiUpdateMessage : public DeserializeInterface {
public:
    std::vector<JobExperience> experiencesUpdate;

    void deserialize(CustomDataInput *input);

private:
};

#endif