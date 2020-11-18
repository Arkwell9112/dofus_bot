#ifndef OBJECTERRORMESSAGE_H
#define OBJECTERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectErrorMessage : public DeserializeInterface {
public:
    int reason = 0;

    void deserialize(CustomDataInput *input);

private:
    void _reasonFunc(CustomDataInput *input);
};

#endif