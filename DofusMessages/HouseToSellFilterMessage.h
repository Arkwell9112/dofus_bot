#ifndef HOUSETOSELLFILTERMESSAGE_H
#define HOUSETOSELLFILTERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseToSellFilterMessage : public DeserializeInterface {
public:
    int areaId = 0;
    unsigned int atLeastNbRoom = 0;
    unsigned int atLeastNbChest = 0;
    unsigned int skillRequested = 0;
    double maxPrice = 0;
    unsigned int orderBy = 0;

    void deserialize(CustomDataInput *input);

private:
    void _areaIdFunc(CustomDataInput *input);

    void _atLeastNbRoomFunc(CustomDataInput *input);

    void _atLeastNbChestFunc(CustomDataInput *input);

    void _skillRequestedFunc(CustomDataInput *input);

    void _maxPriceFunc(CustomDataInput *input);

    void _orderByFunc(CustomDataInput *input);
};

#endif