#ifndef ALLIANCEMODIFICATIONNAMEANDTAGVALIDMESSAGE_H
#define ALLIANCEMODIFICATIONNAMEANDTAGVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceModificationNameAndTagValidMessage : public DeserializeInterface {
public:
    std::string allianceName;
    std::string allianceTag;

    void deserialize(CustomDataInput *input);

private:
    void _allianceNameFunc(CustomDataInput *input);

    void _allianceTagFunc(CustomDataInput *input);
};

#endif