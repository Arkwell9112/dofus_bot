#ifndef OBJECTEFFECTCREATURE_H
#define OBJECTEFFECTCREATURE_H

#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectCreature : public ObjectEffect {
public:
    unsigned int monsterFamilyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _monsterFamilyIdFunc(CustomDataInput *input);
};

#endif