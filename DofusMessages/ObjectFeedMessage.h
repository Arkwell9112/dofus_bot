#ifndef OBJECTFEEDMESSAGE_H
#define OBJECTFEEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItemQuantity.h"

#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ObjectFeedMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    std::vector<ObjectItemQuantity> meal;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif