#ifndef OBJECTMOVEMENTMESSAGE_H
#define OBJECTMOVEMENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectMovementMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;
    unsigned int position = 63;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);

    void _positionFunc(CustomDataInput *input);
};

#endif