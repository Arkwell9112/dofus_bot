#ifndef JOBDESCRIPTION_H
#define JOBDESCRIPTION_H

#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobDescription : public DeserializeInterface {
public:
    unsigned int jobId = 0;
    std::vector<SkillActionDescription> skills;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);

    void _skillsFunc(CustomDataInput *input);
};

#endif