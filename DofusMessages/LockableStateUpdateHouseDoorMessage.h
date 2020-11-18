#ifndef LOCKABLESTATEUPDATEHOUSEDOORMESSAGE_H
#define LOCKABLESTATEUPDATEHOUSEDOORMESSAGE_H

#include "LockableStateUpdateAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LockableStateUpdateHouseDoorMessage : public LockableStateUpdateAbstractMessage {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);

    void _secondHandFunc(CustomDataInput *input);
};

#endif