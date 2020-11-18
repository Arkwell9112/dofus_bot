#ifndef BREACHENTERMESSAGE_H
#define BREACHENTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachEnterMessage : public DeserializeInterface {
public:
    double owner = 0;

    void deserialize(CustomDataInput *input);

private:
    void _ownerFunc(CustomDataInput *input);
};

#endif