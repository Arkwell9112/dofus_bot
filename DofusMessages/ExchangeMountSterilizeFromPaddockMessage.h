#ifndef EXCHANGEMOUNTSTERILIZEFROMPADDOCKMESSAGE_H
#define EXCHANGEMOUNTSTERILIZEFROMPADDOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMountSterilizeFromPaddockMessage : public DeserializeInterface {
public:
    std::string name;
    int worldX = 0;
    int worldY = 0;
    std::string sterilizator;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _sterilizatorFunc(CustomDataInput *input);
};

#endif