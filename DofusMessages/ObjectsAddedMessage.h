#ifndef OBJECTSADDEDMESSAGE_H
#define OBJECTSADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ObjectsAddedMessage : public DeserializeInterface {
public:
    std::vector<ObjectItem> object;

    void deserialize(CustomDataInput *input);

private:
};

#endif