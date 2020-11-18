#ifndef HOUSEKICKREQUESTMESSAGE_H
#define HOUSEKICKREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseKickRequestMessage : public DeserializeInterface {
public:
    double id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif