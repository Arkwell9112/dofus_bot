#ifndef ALLIANCECREATIONSTARTEDMESSAGE_H
#define ALLIANCECREATIONSTARTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceCreationStartedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif