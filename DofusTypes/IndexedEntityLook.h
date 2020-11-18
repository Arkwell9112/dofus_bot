#ifndef INDEXEDENTITYLOOK_H
#define INDEXEDENTITYLOOK_H

#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class IndexedEntityLook : public DeserializeInterface {
public:
    EntityLook look;
    unsigned int index = 0;

    void deserialize(CustomDataInput *input);

private:
    void _indexFunc(CustomDataInput *input);
};

#endif