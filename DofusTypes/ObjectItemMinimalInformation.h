#ifndef OBJECTITEMMINIMALINFORMATION_H
#define OBJECTITEMMINIMALINFORMATION_H

#include "ObjectItem.h"
#include "ObjectEffect.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemMinimalInformation : public Item {
public:
    unsigned int objectGID = 0;
    std::vector<ObjectEffect> effects;

    void deserialize(CustomDataInput *input);

private:
    void _objectGIDFunc(CustomDataInput *input);

    void _effectsFunc(CustomDataInput *input);
};

#endif