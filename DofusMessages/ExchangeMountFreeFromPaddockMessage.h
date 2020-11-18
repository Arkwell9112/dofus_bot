#ifndef EXCHANGEMOUNTFREEFROMPADDOCKMESSAGE_H
#define EXCHANGEMOUNTFREEFROMPADDOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMountFreeFromPaddockMessage : public DeserializeInterface {
public:
    std::string name;
    int worldX = 0;
    int worldY = 0;
    std::string liberator;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _liberatorFunc(CustomDataInput *input);
};

#endif