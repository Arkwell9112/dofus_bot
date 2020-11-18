#ifndef BREACHSAVEDMESSAGE_H
#define BREACHSAVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BreachSavedMessage : public DeserializeInterface {
public:
    bool saved = false;

    void deserialize(CustomDataInput *input);

private:
    void _savedFunc(CustomDataInput *input);
};

#endif