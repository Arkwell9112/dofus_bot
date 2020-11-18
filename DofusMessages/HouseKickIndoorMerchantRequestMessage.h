#ifndef HOUSEKICKINDOORMERCHANTREQUESTMESSAGE_H
#define HOUSEKICKINDOORMERCHANTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseKickIndoorMerchantRequestMessage : public DeserializeInterface {
public:
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);
};

#endif