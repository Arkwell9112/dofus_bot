#ifndef EXCHANGEBIDHOUSESEARCHMESSAGE_H
#define EXCHANGEBIDHOUSESEARCHMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHouseSearchMessage : public DeserializeInterface {
public:
    unsigned int genId = 0;
    bool follow = false;

    void deserialize(CustomDataInput *input);

private:
    void _genIdFunc(CustomDataInput *input);

    void _followFunc(CustomDataInput *input);
};

#endif