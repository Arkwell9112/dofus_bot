#ifndef SHOWCELLMESSAGE_H
#define SHOWCELLMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShowCellMessage : public DeserializeInterface {
public:
    double sourceId = 0;
    unsigned int cellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _sourceIdFunc(CustomDataInput *input);

    void _cellIdFunc(CustomDataInput *input);
};

#endif