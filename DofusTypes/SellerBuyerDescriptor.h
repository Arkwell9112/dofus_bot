#ifndef SELLERBUYERDESCRIPTOR_H
#define SELLERBUYERDESCRIPTOR_H

#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SellerBuyerDescriptor : public DeserializeInterface {
public:
    std::vector<unsigned int> quantities;
    std::vector<unsigned int> types;
    double taxPercentage = 0;
    double taxModificationPercentage = 0;
    unsigned int maxItemLevel = 0;
    unsigned int maxItemPerAccount = 0;
    int npcContextualId = 0;
    unsigned int unsoldDelay = 0;

    void deserialize(CustomDataInput *input);

private:
    void _quantitiesFunc(CustomDataInput *input);

    void _typesFunc(CustomDataInput *input);

    void _taxPercentageFunc(CustomDataInput *input);

    void _taxModificationPercentageFunc(CustomDataInput *input);

    void _maxItemLevelFunc(CustomDataInput *input);

    void _maxItemPerAccountFunc(CustomDataInput *input);

    void _npcContextualIdFunc(CustomDataInput *input);

    void _unsoldDelayFunc(CustomDataInput *input);
};

#endif