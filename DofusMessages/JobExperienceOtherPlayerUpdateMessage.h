#ifndef JOBEXPERIENCEOTHERPLAYERUPDATEMESSAGE_H
#define JOBEXPERIENCEOTHERPLAYERUPDATEMESSAGE_H

#include "JobExperienceUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobExperience.h"

#include <string>
#include <vector>

class JobExperienceOtherPlayerUpdateMessage : public JobExperienceUpdateMessage {
public:
    double playerId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);
};

#endif