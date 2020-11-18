#ifndef CHARACTERLEVELUPINFORMATIONMESSAGE_H
#define CHARACTERLEVELUPINFORMATIONMESSAGE_H

#include "CharacterLevelUpMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterLevelUpInformationMessage : public CharacterLevelUpMessage {
public:
    std::string name;
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _idFunc(CustomDataInput *input);
};

#endif