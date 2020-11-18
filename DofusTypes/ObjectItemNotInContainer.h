#ifndef OBJECTITEMNOTINCONTAINER_H
#define OBJECTITEMNOTINCONTAINER_H

#include "ObjectItem.h"
#include "ObjectEffect.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemNotInContainer : public Item {
public:
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;
    unsigned int objectUID = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectGIDFunc(CustomDataInput *input);

    void _effectsFunc(CustomDataInput *input);

    void _objectUIDFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif