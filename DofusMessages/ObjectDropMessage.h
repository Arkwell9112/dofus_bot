#ifndef OBJECTDROPMESSAGE_H
#define OBJECTDROPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectDropMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif