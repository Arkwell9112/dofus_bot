#ifndef JOBCRAFTERDIRECTORYSETTINGSMESSAGE_H
#define JOBCRAFTERDIRECTORYSETTINGSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectorySettings.h"

#include <string>
#include <vector>

class JobCrafterDirectorySettingsMessage : public DeserializeInterface {
public:
    std::vector<JobCrafterDirectorySettings> craftersSettings;

    void deserialize(CustomDataInput *input);

private:
};

#endif