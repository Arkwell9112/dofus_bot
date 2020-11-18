#ifndef OBJECTITEMINFORMATIONWITHQUANTITY_H
#define OBJECTITEMINFORMATIONWITHQUANTITY_H

#include "ObjectItemMinimalInformation.h"
#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemInformationWithQuantity : public ObjectItemMinimalInformation {
public:
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _quantityFunc(CustomDataInput *input);
};

#endif