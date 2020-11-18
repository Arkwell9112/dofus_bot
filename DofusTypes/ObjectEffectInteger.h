#ifndef OBJECTEFFECTINTEGER_H
#define OBJECTEFFECTINTEGER_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectInteger : public ObjectEffect {
public:
    unsigned int value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif