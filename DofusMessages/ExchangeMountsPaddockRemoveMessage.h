#ifndef EXCHANGEMOUNTSPADDOCKREMOVEMESSAGE_H
#define EXCHANGEMOUNTSPADDOCKREMOVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMountsPaddockRemoveMessage : public DeserializeInterface {
public:
    std::vector<int> mountsId;

    void deserialize(CustomDataInput *input);

private:
    void _mountsIdFunc(CustomDataInput *input);
};

#endif