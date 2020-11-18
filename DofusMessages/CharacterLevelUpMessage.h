#ifndef CHARACTERLEVELUPMESSAGE_H
#define CHARACTERLEVELUPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterLevelUpMessage : public DeserializeInterface {
public:
    unsigned int newLevel = 0;

    void deserialize(CustomDataInput *input);

private:
};

#endif