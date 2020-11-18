#ifndef OBJECTSQUANTITYMESSAGE_H
#define OBJECTSQUANTITYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ObjectsQuantityMessage : public DeserializeInterface {
public:
    std::vector<ObjectItemQuantity> objectsUIDAndQty;

    void deserialize(CustomDataInput *input);

private:
};

#endif