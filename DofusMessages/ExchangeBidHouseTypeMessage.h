#ifndef EXCHANGEBIDHOUSETYPEMESSAGE_H
#define EXCHANGEBIDHOUSETYPEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeBidHouseTypeMessage : public DeserializeInterface {
public:
    unsigned int type = 0;
    bool follow = false;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);

    void _followFunc(CustomDataInput *input);
};

#endif