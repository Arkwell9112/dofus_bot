#ifndef OBJECTSETPOSITIONMESSAGE_H
#define OBJECTSETPOSITIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectSetPositionMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    unsigned int position = 63;
    unsigned int quantity = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _positionFunc(CustomDataInput *input);

    void _quantityFunc(CustomDataInput *input);
};

#endif