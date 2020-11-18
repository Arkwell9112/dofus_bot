#ifndef ALIGNMENTWAREFFORTINFORMATION_H
#define ALIGNMENTWAREFFORTINFORMATION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlignmentWarEffortInformation : public DeserializeInterface {
public:
    int alignmentSide = 0;
    double alignmentWarEffort = 0;

    void deserialize(CustomDataInput *input);

private:
    void _alignmentSideFunc(CustomDataInput *input);

    void _alignmentWarEffortFunc(CustomDataInput *input);
};

#endif