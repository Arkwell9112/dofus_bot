#ifndef PADDOCKSELLBUYDIALOGMESSAGE_H
#define PADDOCKSELLBUYDIALOGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockSellBuyDialogMessage : public DeserializeInterface {
public:
    bool bsell = false;
    unsigned int ownerId = 0;
    double price = 0;

    void deserialize(CustomDataInput *input);

private:
    void _bsellFunc(CustomDataInput *input);

    void _ownerIdFunc(CustomDataInput *input);

    void _priceFunc(CustomDataInput *input);
};

#endif