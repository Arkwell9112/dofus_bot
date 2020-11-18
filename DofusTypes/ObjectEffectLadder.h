#ifndef OBJECTEFFECTLADDER_H
#define OBJECTEFFECTLADDER_H

#include "ObjectEffectCreature.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectLadder : public ObjectEffectCreature {
public:
    unsigned int monsterCount = 0;

    void deserialize(CustomDataInput *input);

private:
    void _monsterCountFunc(CustomDataInput *input);
};

#endif