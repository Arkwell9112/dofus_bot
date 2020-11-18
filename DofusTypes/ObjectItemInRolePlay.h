#ifndef OBJECTITEMINROLEPLAY_H
#define OBJECTITEMINROLEPLAY_H

#include "ObjectItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectItemInRolePlay : public DeserializeInterface {
public:
    unsigned int cellId = 0;
    unsigned int objectGID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);

    void _objectGIDFunc(CustomDataInput *input);
};

#endif