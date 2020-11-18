#ifndef RECYCLEDITEM_H
#define RECYCLEDITEM_H

#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class RecycledItem : public DeserializeInterface {
public:
    unsigned int id = 0;
    unsigned int qty = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _qtyFunc(CustomDataInput *input);
};

#endif