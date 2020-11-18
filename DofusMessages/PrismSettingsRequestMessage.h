#ifndef PRISMSETTINGSREQUESTMESSAGE_H
#define PRISMSETTINGSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PrismSettingsRequestMessage : public DeserializeInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int startDefenseTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);

    void _startDefenseTimeFunc(CustomDataInput *input);
};

#endif