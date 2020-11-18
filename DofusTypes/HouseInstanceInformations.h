#ifndef HOUSEINSTANCEINFORMATIONS_H
#define HOUSEINSTANCEINFORMATIONS_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseInstanceInformations : public DeserializeInterface {
public:
    unsigned int instanceId = 0;
    bool secondHand = false;
    bool isLocked = false;
    std::string ownerName;
    double price = 0;
    bool isSaleLocked = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);

    void _ownerNameFunc(CustomDataInput *input);

    void _priceFunc(CustomDataInput *input);
};

#endif