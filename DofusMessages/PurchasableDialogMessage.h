#ifndef PURCHASABLEDIALOGMESSAGE_H
#define PURCHASABLEDIALOGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PurchasableDialogMessage : public DeserializeInterface {
public:
    bool buyOrSell = false;
    double purchasableId = 0;
    unsigned int purchasableInstanceId = 0;
    bool secondHand = false;
    double price = 0;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _purchasableIdFunc(CustomDataInput *input);

    void _purchasableInstanceIdFunc(CustomDataInput *input);

    void _priceFunc(CustomDataInput *input);
};

#endif