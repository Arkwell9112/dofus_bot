#ifndef OBJECTITEMTOSELLINNPCSHOP_H
#define OBJECTITEMTOSELLINNPCSHOP_H

#include "ObjectItemToSell.h"
#include "ObjectItemMinimalInformation.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemToSellInNpcShop : public ObjectItemMinimalInformation {
public:
    double objectPrice = 0;
    std::string buyCriterion;

    void deserialize(CustomDataInput *input);

private:
    void _objectPriceFunc(CustomDataInput *input);

    void _buyCriterionFunc(CustomDataInput *input);
};

#endif