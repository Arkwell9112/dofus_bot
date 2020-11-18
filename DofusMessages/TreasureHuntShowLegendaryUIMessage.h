#ifndef TREASUREHUNTSHOWLEGENDARYUIMESSAGE_H
#define TREASUREHUNTSHOWLEGENDARYUIMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TreasureHuntShowLegendaryUIMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> availableLegendaryIds;

    void deserialize(CustomDataInput *input);

private:
    void _availableLegendaryIdsFunc(CustomDataInput *input);
};

#endif