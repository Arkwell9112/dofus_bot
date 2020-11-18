#ifndef EXCHANGEBIDHOUSELISTMESSAGE_H
#define EXCHANGEBIDHOUSELISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHouseListMessage : public DeserializeInterface {
public:
    unsigned int id = 0;
    bool follow = false;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _followFunc(CustomDataInput *input);
};

#endif