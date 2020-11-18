#ifndef HOUSESELLFROMINSIDEREQUESTMESSAGE_H
#define HOUSESELLFROMINSIDEREQUESTMESSAGE_H

#include "HouseSellRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseSellFromInsideRequestMessage : public HouseSellRequestMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif