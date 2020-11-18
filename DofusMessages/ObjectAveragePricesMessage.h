#ifndef OBJECTAVERAGEPRICESMESSAGE_H
#define OBJECTAVERAGEPRICESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectAveragePricesMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> ids;
    std::vector<double> avgPrices;

    void deserialize(CustomDataInput *input);

private:
    void _idsFunc(CustomDataInput *input);

    void _avgPricesFunc(CustomDataInput *input);
};

#endif