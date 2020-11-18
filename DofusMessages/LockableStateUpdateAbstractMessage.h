#ifndef LOCKABLESTATEUPDATEABSTRACTMESSAGE_H
#define LOCKABLESTATEUPDATEABSTRACTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LockableStateUpdateAbstractMessage : public DeserializeInterface {
public:
    bool locked = false;

    void deserialize(CustomDataInput *input);

private:
    void _lockedFunc(CustomDataInput *input);
};

#endif