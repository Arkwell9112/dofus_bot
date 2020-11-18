#ifndef OBJECTITEMQUANTITY_H
#define OBJECTITEMQUANTITY_H

#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemQuantity : public Item {
public:
    unsigned int objectUID = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif