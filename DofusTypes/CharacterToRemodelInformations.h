#ifndef CHARACTERTOREMODELINFORMATIONS_H
#define CHARACTERTOREMODELINFORMATIONS_H

#include "RemodelingInformation.h"
#include "CharacterRemodelingInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterToRemodelInformations : public CharacterRemodelingInformation {
public:
    unsigned int possibleChangeMask = 0;
    unsigned int mandatoryChangeMask = 0;

    void deserialize(CustomDataInput *input);

private:
    void _possibleChangeMaskFunc(CustomDataInput *input);

    void _mandatoryChangeMaskFunc(CustomDataInput *input);
};

#endif