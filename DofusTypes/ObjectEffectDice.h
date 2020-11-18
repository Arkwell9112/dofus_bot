#ifndef OBJECTEFFECTDICE_H
#define OBJECTEFFECTDICE_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectDice : public ObjectEffect {
public:
    unsigned int diceNum = 0;
    unsigned int diceSide = 0;
    unsigned int diceConst = 0;

    void deserialize(CustomDataInput *input);

private:
    void _diceNumFunc(CustomDataInput *input);

    void _diceSideFunc(CustomDataInput *input);

    void _diceConstFunc(CustomDataInput *input);
};

#endif