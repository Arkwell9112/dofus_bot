#ifndef JOBEXPERIENCE_H
#define JOBEXPERIENCE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobExperience : public DeserializeInterface {
public:
    unsigned int jobId = 0;
    unsigned int jobLevel = 0;
    double jobXP = 0;
    double jobXpLevelFloor = 0;
    double jobXpNextLevelFloor = 0;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);

    void _jobLevelFunc(CustomDataInput *input);

    void _jobXPFunc(CustomDataInput *input);

    void _jobXpLevelFloorFunc(CustomDataInput *input);

    void _jobXpNextLevelFloorFunc(CustomDataInput *input);
};

#endif