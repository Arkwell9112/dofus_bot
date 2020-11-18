#ifndef GUILDINFOSUPGRADEMESSAGE_H
#define GUILDINFOSUPGRADEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInfosUpgradeMessage : public DeserializeInterface {
public:
    unsigned int maxTaxCollectorsCount = 0;
    unsigned int taxCollectorsCount = 0;
    unsigned int taxCollectorLifePoints = 0;
    unsigned int taxCollectorDamagesBonuses = 0;
    unsigned int taxCollectorPods = 0;
    unsigned int taxCollectorProspecting = 0;
    unsigned int taxCollectorWisdom = 0;
    unsigned int boostPoints = 0;
    std::vector<unsigned int> spellId;
    std::vector<int> spellLevel;

    void deserialize(CustomDataInput *input);

private:
    void _maxTaxCollectorsCountFunc(CustomDataInput *input);

    void _taxCollectorsCountFunc(CustomDataInput *input);

    void _taxCollectorLifePointsFunc(CustomDataInput *input);

    void _taxCollectorDamagesBonusesFunc(CustomDataInput *input);

    void _taxCollectorPodsFunc(CustomDataInput *input);

    void _taxCollectorProspectingFunc(CustomDataInput *input);

    void _taxCollectorWisdomFunc(CustomDataInput *input);

    void _boostPointsFunc(CustomDataInput *input);

    void _spellIdFunc(CustomDataInput *input);

    void _spellLevelFunc(CustomDataInput *input);
};

#endif