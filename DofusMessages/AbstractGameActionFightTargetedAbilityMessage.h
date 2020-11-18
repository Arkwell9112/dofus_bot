#ifndef ABSTRACTGAMEACTIONFIGHTTARGETEDABILITYMESSAGE_H
#define ABSTRACTGAMEACTIONFIGHTTARGETEDABILITYMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractGameActionFightTargetedAbilityMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int destinationCellId = 0;
    unsigned int critical = 1;
    bool silentCast = false;
    bool verboseCast = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _targetIdFunc(CustomDataInput *input);

    void _destinationCellIdFunc(CustomDataInput *input);

    void _criticalFunc(CustomDataInput *input);
};

#endif