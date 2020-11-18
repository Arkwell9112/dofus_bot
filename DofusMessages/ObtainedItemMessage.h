#ifndef OBTAINEDITEMMESSAGE_H
#define OBTAINEDITEMMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ObtainedItemMessage : public DeserializeInterface {
public:
    unsigned int genericId = 0;
    unsigned int baseQuantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _genericIdFunc(CustomDataInput *input);

    void _baseQuantityFunc(CustomDataInput *input);
};

#endif