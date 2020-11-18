#ifndef BREACHEXITRESPONSEMESSAGE_H
#define BREACHEXITRESPONSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachExitResponseMessage : public DeserializeInterface {
public:
    bool exited = false;

    void deserialize(CustomDataInput *input);

private:
    void _exitedFunc(CustomDataInput *input);
};

#endif