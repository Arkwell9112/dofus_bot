#ifndef MONSTERINGROUPLIGHTINFORMATIONS_H
#define MONSTERINGROUPLIGHTINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MonsterInGroupLightInformations : public DeserializeInterface {
public:
    int genericId = 0;
    unsigned int grade = 0;
    unsigned int level = 0;

    void deserialize(CustomDataInput *input);

private:
    void _genericIdFunc(CustomDataInput *input);

    void _gradeFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);
};

#endif