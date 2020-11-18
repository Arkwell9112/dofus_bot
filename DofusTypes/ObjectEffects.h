#ifndef OBJECTEFFECTS_H
#define OBJECTEFFECTS_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffects : public DeserializeInterface {
public:
    std::vector<ObjectEffect> effects;

    void deserialize(CustomDataInput *input);

private:
    void _effectsFunc(CustomDataInput *input);
};

#endif