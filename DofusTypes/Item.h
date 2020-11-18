#ifndef ITEM_H
#define ITEM_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class Item : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif