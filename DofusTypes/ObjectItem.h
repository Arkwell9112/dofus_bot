#ifndef OBJECTITEM_H
#define OBJECTITEM_H

#include "ObjectEffect.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItem : public Item {
public:
    unsigned int position = 63;
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;
    unsigned int objectUID = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _positionFunc(CustomDataInput *input);

    void _objectGIDFunc(CustomDataInput *input);

    void _effectsFunc(CustomDataInput *input);

    void _objectUIDFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif