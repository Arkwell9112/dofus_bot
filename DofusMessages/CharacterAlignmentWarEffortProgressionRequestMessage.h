#ifndef CHARACTERALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE_H
#define CHARACTERALIGNMENTWAREFFORTPROGRESSIONREQUESTMESSAGE_H

#include "AlignmentWarEffortProgressionRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterAlignmentWarEffortProgressionRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif