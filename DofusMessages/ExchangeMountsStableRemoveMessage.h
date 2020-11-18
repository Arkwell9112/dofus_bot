#ifndef EXCHANGEMOUNTSSTABLEREMOVEMESSAGE_H
#define EXCHANGEMOUNTSSTABLEREMOVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeMountsStableRemoveMessage : public DeserializeInterface {
public:
    std::vector<int> mountsId;

    void deserialize(CustomDataInput *input);

private:
    void _mountsIdFunc(CustomDataInput *input);
};

#endif