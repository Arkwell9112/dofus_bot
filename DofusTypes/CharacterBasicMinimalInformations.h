#ifndef CHARACTERBASICMINIMALINFORMATIONS_H
#define CHARACTERBASICMINIMALINFORMATIONS_H

#include "AbstractCharacterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterBasicMinimalInformations : public AbstractCharacterInformation {
public:
    std::string name;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);
};

#endif