#ifndef OBJECTEFFECTMOUNT_H
#define OBJECTEFFECTMOUNT_H

#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectEffectMount : public ObjectEffect {
public:
    double id = 0;
    double expirationDate = 0;
    unsigned int model = 0;
    std::string name;
    std::string owner;
    unsigned int level = 0;
    bool sex = false;
    bool isRideable = false;
    bool isFeconded = false;
    bool isFecondationReady = false;
    int reproductionCount = 0;
    unsigned int reproductionCountMax = 0;
    std::vector<ObjectEffectInteger> effects;
    std::vector<unsigned int> capacities;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _idFunc(CustomDataInput *input);

    void _expirationDateFunc(CustomDataInput *input);

    void _modelFunc(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);

    void _ownerFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _reproductionCountFunc(CustomDataInput *input);

    void _reproductionCountMaxFunc(CustomDataInput *input);

    void _capacitiesFunc(CustomDataInput *input);
};

#endif