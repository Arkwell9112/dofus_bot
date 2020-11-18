#ifndef OBJECTMODIFIEDMESSAGE_H
#define OBJECTMODIFIEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ObjectModifiedMessage : public DeserializeInterface {
public:
    ObjectItem object;

    void deserialize(CustomDataInput *input);

private:
};

#endif