#ifndef OBJECTEFFECTSTRING_H
#define OBJECTEFFECTSTRING_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectString : public ObjectEffect {
public:
    std::string value;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif