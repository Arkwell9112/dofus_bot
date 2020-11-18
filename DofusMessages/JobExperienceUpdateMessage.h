#ifndef JOBEXPERIENCEUPDATEMESSAGE_H
#define JOBEXPERIENCEUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobExperience.h"

#include <string>
#include <vector>

class JobExperienceUpdateMessage : public DeserializeInterface {
public:
    JobExperience experiencesUpdate;

    void deserialize(CustomDataInput *input);

private:
};

#endif