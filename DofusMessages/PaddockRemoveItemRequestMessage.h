#ifndef PADDOCKREMOVEITEMREQUESTMESSAGE_H
#define PADDOCKREMOVEITEMREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class PaddockRemoveItemRequestMessage : public DeserializeInterface {
public:
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellIdFunc(CustomDataInput *input);
};

#endif