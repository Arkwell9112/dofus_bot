#ifndef CHARACTERLOADINGCOMPLETEMESSAGE_H
#define CHARACTERLOADINGCOMPLETEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterLoadingCompleteMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif