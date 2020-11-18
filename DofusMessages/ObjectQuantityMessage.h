#ifndef OBJECTQUANTITYMESSAGE_H
#define OBJECTQUANTITYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectQuantityMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    unsigned int quantity = 0;
    unsigned int origin = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);

    void _originFunc(CustomDataInput *input);
};

#endif