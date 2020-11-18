#ifndef ALLIANCEINSIDERPRISMINFORMATION_H
#define ALLIANCEINSIDERPRISMINFORMATION_H

#include "PrismInformation.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceInsiderPrismInformation : public PrismInformation {
public:
    unsigned int lastTimeSlotModificationDate = 0;
    unsigned int lastTimeSlotModificationAuthorGuildId = 0;
    double lastTimeSlotModificationAuthorId = 0;
    std::string lastTimeSlotModificationAuthorName;
    std::vector<ObjectItem> modulesObjects;

    void deserialize(CustomDataInput *input);

private:
    void _lastTimeSlotModificationDateFunc(CustomDataInput *input);

    void _lastTimeSlotModificationAuthorGuildIdFunc(CustomDataInput *input);

    void _lastTimeSlotModificationAuthorIdFunc(CustomDataInput *input);

    void _lastTimeSlotModificationAuthorNameFunc(CustomDataInput *input);
};

#endif