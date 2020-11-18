#ifndef OBJECTADDEDMESSAGE_H
#define OBJECTADDEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ObjectAddedMessage : public DeserializeInterface {
public:
    ObjectItem object;
    unsigned int origin = 0;

    void deserialize(CustomDataInput *input);

private:
    void _originFunc(CustomDataInput *input);
};

#endif