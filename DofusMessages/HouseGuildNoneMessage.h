#ifndef HOUSEGUILDNONEMESSAGE_H
#define HOUSEGUILDNONEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseGuildNoneMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);

    void _secondHandFunc(CustomDataInput *input);
};

#endif