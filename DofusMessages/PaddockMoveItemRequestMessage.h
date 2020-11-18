#ifndef PADDOCKMOVEITEMREQUESTMESSAGE_H
#define PADDOCKMOVEITEMREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class PaddockMoveItemRequestMessage : public DeserializeInterface {
public:
    unsigned int oldCellId = 0;
    unsigned int newCellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _oldCellIdFunc(CustomDataInput *input);
};

#endif