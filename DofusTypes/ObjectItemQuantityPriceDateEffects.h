#ifndef OBJECTITEMQUANTITYPRICEDATEEFFECTS_H
#define OBJECTITEMQUANTITYPRICEDATEEFFECTS_H

#include "ObjectItemQuantity.h"
#include "ObjectItemGenericQuantity.h"
#include "ObjectItem.h"
#include "ObjectEffects.h"
#include "ObjectEffect.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemQuantityPriceDateEffects : public ObjectItemGenericQuantity {
public:
    double price = 0;
    ObjectEffects effects;
    unsigned int date = 0;

    void deserialize(CustomDataInput *input);

private:
    void _priceFunc(CustomDataInput *input);

    void _dateFunc(CustomDataInput *input);
};

#endif