#ifndef GOLDITEM_H
#define GOLDITEM_H

#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GoldItem : public Item {
public:
    double sum = 0;

    void deserialize(CustomDataInput *input);

private:
    void _sumFunc(CustomDataInput *input);
};

#endif