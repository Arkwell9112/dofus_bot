#ifndef ALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE_H
#define ALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlignmentWarEffortProgressionRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif