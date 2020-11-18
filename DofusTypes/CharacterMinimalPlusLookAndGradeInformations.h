#ifndef CHARACTERMINIMALPLUSLOOKANDGRADEINFORMATIONS_H
#define CHARACTERMINIMALPLUSLOOKANDGRADEINFORMATIONS_H

#include "CharacterMinimalPlusLookInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class CharacterMinimalPlusLookAndGradeInformations : public CharacterMinimalPlusLookInformations {
public:
    unsigned int grade = 0;

    void deserialize(CustomDataInput *input);

private:
    void _gradeFunc(CustomDataInput *input);
};

#endif