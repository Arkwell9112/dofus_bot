#ifndef MOUNTCLIENTDATA_H
#define MOUNTCLIENTDATA_H

#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountClientData : public DeserializeInterface {
public:
    double id = 0;
    unsigned int model = 0;
    std::vector<unsigned int> ancestor;
    std::vector<unsigned int> behaviors;
    std::string name;
    bool sex = false;
    unsigned int ownerId = 0;
    double experience = 0;
    double experienceForLevel = 0;
    double experienceForNextLevel = 0;
    unsigned int level = 0;
    bool isRideable = false;
    unsigned int maxPods = 0;
    bool isWild = false;
    unsigned int stamina = 0;
    unsigned int staminaMax = 0;
    unsigned int maturity = 0;
    unsigned int maturityForAdult = 0;
    unsigned int energy = 0;
    unsigned int energyMax = 0;
    int serenity = 0;
    int aggressivityMax = 0;
    unsigned int serenityMax = 0;
    unsigned int love = 0;
    unsigned int loveMax = 0;
    int fecondationTime = 0;
    bool isFecondationReady = false;
    unsigned int boostLimiter = 0;
    double boostMax = 0;
    int reproductionCount = 0;
    unsigned int reproductionCountMax = 0;
    unsigned int harnessGID = 0;
    bool useHarnessColors = false;
    std::vector<ObjectEffectInteger> effectList;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _idFunc(CustomDataInput *input);

    void _modelFunc(CustomDataInput *input);

    void _ancestorFunc(CustomDataInput *input);

    void _behaviorsFunc(CustomDataInput *input);

    void _nameFunc(CustomDataInput *input);

    void _ownerIdFunc(CustomDataInput *input);

    void _experienceFunc(CustomDataInput *input);

    void _experienceForLevelFunc(CustomDataInput *input);

    void _experienceForNextLevelFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _maxPodsFunc(CustomDataInput *input);

    void _staminaFunc(CustomDataInput *input);

    void _staminaMaxFunc(CustomDataInput *input);

    void _maturityFunc(CustomDataInput *input);

    void _maturityForAdultFunc(CustomDataInput *input);

    void _energyFunc(CustomDataInput *input);

    void _energyMaxFunc(CustomDataInput *input);

    void _serenityFunc(CustomDataInput *input);

    void _aggressivityMaxFunc(CustomDataInput *input);

    void _serenityMaxFunc(CustomDataInput *input);

    void _loveFunc(CustomDataInput *input);

    void _loveMaxFunc(CustomDataInput *input);

    void _fecondationTimeFunc(CustomDataInput *input);

    void _boostLimiterFunc(CustomDataInput *input);

    void _boostMaxFunc(CustomDataInput *input);

    void _reproductionCountFunc(CustomDataInput *input);

    void _reproductionCountMaxFunc(CustomDataInput *input);

    void _harnessGIDFunc(CustomDataInput *input);
};

#endif