#ifndef JOBLEVELUPMESSAGE_H
#define JOBLEVELUPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobDescription.h"

#include <string>
#include <vector>

class JobLevelUpMessage : public DeserializeInterface {
public:
    unsigned int newLevel = 0;
    JobDescription jobsDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif