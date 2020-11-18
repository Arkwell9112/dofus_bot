#ifndef RECYCLERESULTMESSAGE_H
#define RECYCLERESULTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class RecycleResultMessage : public DeserializeInterface {
public:
    unsigned int nuggetsForPrism = 0;
    unsigned int nuggetsForPlayer = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nuggetsForPrismFunc(CustomDataInput *input);

    void _nuggetsForPlayerFunc(CustomDataInput *input);
};

#endif