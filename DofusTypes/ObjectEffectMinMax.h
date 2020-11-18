#ifndef OBJECTEFFECTMINMAX_H
#define OBJECTEFFECTMINMAX_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectMinMax : public ObjectEffect {
public:
    unsigned int min = 0;
    unsigned int max = 0;

    void deserialize(CustomDataInput *input);

private:
    void _minFunc(CustomDataInput *input);

    void _maxFunc(CustomDataInput *input);
};

#endif