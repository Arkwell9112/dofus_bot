#ifndef CHARACTERSELECTEDFORCEREADYMESSAGE_H
#define CHARACTERSELECTEDFORCEREADYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterSelectedForceReadyMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif