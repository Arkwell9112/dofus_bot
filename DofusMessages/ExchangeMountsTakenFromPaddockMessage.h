#ifndef EXCHANGEMOUNTSTAKENFROMPADDOCKMESSAGE_H
#define EXCHANGEMOUNTSTAKENFROMPADDOCKMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMountsTakenFromPaddockMessage : public DeserializeInterface {
public:
    std::string name;
    int worldX = 0;
    int worldY = 0;
    std::string ownername;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);

    void _ownernameFunc(CustomDataInput *input);
};

#endif