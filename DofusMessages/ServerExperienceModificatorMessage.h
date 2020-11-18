#ifndef SERVEREXPERIENCEMODIFICATORMESSAGE_H
#define SERVEREXPERIENCEMODIFICATORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ServerExperienceModificatorMessage : public DeserializeInterface {
public:
    unsigned int experiencePercent = 0;

    void deserialize(CustomDataInput *input);

private:
    void _experiencePercentFunc(CustomDataInput *input);
};

#endif