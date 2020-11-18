#ifndef HOUSEINFORMATIONS_H
#define HOUSEINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseInformations : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int modelId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _modelIdFunc(CustomDataInput *input);
};

#endif