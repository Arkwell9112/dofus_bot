#ifndef CHARACTERREMODELINGINFORMATION_H
#define CHARACTERREMODELINGINFORMATION_H

#include "RemodelingInformation.h"
#include "AbstractCharacterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterRemodelingInformation : public AbstractCharacterInformation {
public:
    std::string name;
    int breed = 0;
    bool sex = false;
    unsigned int cosmeticId = 0;
    std::vector<int> colors;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);

    void _cosmeticIdFunc(CustomDataInput *input);

    void _colorsFunc(CustomDataInput *input);
};

#endif