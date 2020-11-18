#ifndef HOUSEBUYREQUESTMESSAGE_H
#define HOUSEBUYREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseBuyRequestMessage : public DeserializeInterface {
public:
    double proposedPrice = 0;

    void deserialize(CustomDataInput *input);

private:
    void _proposedPriceFunc(CustomDataInput *input);
};

#endif