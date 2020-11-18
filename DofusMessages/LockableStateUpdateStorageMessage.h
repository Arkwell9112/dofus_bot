#ifndef LOCKABLESTATEUPDATESTORAGEMESSAGE_H
#define LOCKABLESTATEUPDATESTORAGEMESSAGE_H

#include "LockableStateUpdateAbstractMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LockableStateUpdateStorageMessage : public LockableStateUpdateAbstractMessage {
public:
    double mapId = 0;
    unsigned int elementId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);

    void _elementIdFunc(CustomDataInput *input);
};

#endif