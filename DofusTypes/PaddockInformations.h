#ifndef PADDOCKINFORMATIONS_H
#define PADDOCKINFORMATIONS_H

#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockInformations : public DeserializeInterface {
public:
    unsigned int maxOutdoorMount = 0;
    unsigned int maxItems = 0;

    void deserialize(CustomDataInput *input);

private:
    void _maxOutdoorMountFunc(CustomDataInput *input);

    void _maxItemsFunc(CustomDataInput *input);
};

#endif