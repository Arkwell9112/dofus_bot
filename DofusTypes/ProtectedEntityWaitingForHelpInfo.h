#ifndef PROTECTEDENTITYWAITINGFORHELPINFO_H
#define PROTECTEDENTITYWAITINGFORHELPINFO_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ProtectedEntityWaitingForHelpInfo : public DeserializeInterface {
public:
    int timeLeftBeforeFight = 0;
    int waitTimeForPlacement = 0;
    unsigned int nbPositionForDefensors = 0;

    void deserialize(CustomDataInput *input);

private:
    void _timeLeftBeforeFightFunc(CustomDataInput *input);

    void _waitTimeForPlacementFunc(CustomDataInput *input);

    void _nbPositionForDefensorsFunc(CustomDataInput *input);
};

#endif