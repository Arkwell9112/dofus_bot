#ifndef HOUSEGUILDRIGHTSVIEWMESSAGE_H
#define HOUSEGUILDRIGHTSVIEWMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseGuildRightsViewMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);
};

#endif