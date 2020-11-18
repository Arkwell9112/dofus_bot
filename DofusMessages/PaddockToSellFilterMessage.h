#ifndef PADDOCKTOSELLFILTERMESSAGE_H
#define PADDOCKTOSELLFILTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockToSellFilterMessage : public DeserializeInterface {
public:
    int areaId = 0;
    int atLeastNbMount = 0;
    int atLeastNbMachine = 0;
    double maxPrice = 0;
    unsigned int orderBy = 0;

    void deserialize(CustomDataInput *input);

private:
    void _areaIdFunc(CustomDataInput *input);

    void _atLeastNbMountFunc(CustomDataInput *input);

    void _atLeastNbMachineFunc(CustomDataInput *input);

    void _maxPriceFunc(CustomDataInput *input);

    void _orderByFunc(CustomDataInput *input);
};

#endif