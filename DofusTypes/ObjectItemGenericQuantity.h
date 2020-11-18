#ifndef OBJECTITEMGENERICQUANTITY_H
#define OBJECTITEMGENERICQUANTITY_H

#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemGenericQuantity : public Item {
public:
    unsigned int objectGID = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectGIDFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif