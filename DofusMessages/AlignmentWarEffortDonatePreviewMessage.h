#ifndef ALIGNMENTWAREFFORTDONATEPREVIEWMESSAGE_H
#define ALIGNMENTWAREFFORTDONATEPREVIEWMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AlignmentWarEffortDonatePreviewMessage : public DeserializeInterface {
public:
    double xp = 0;

    void deserialize(CustomDataInput *input);

private:
    void _xpFunc(CustomDataInput *input);
};

#endif