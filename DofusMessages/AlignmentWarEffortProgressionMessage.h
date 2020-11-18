#ifndef ALIGNMENTWAREFFORTPROGRESSIONMESSAGE_H
#define ALIGNMENTWAREFFORTPROGRESSIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AlignmentWarEffortInformation.h"

#include <string>
#include <vector>

class AlignmentWarEffortProgressionMessage : public DeserializeInterface {
public:
    std::vector<AlignmentWarEffortInformation> effortProgressions;

    void deserialize(CustomDataInput *input);

private:
};

#endif