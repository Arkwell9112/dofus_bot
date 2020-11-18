#ifndef JOBCRAFTERDIRECTORYDEFINESETTINGSMESSAGE_H
#define JOBCRAFTERDIRECTORYDEFINESETTINGSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobCrafterDirectorySettings.h"

#include <string>
#include <vector>

class JobCrafterDirectoryDefineSettingsMessage : public DeserializeInterface {
public:
    JobCrafterDirectorySettings settings;

    void deserialize(CustomDataInput *input);

private:
};

#endif