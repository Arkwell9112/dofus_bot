#ifndef ITEMNOMOREAVAILABLEMESSAGE_H
#define ITEMNOMOREAVAILABLEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ItemNoMoreAvailableMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif