#ifndef BASICSTATWITHDATAMESSAGE_H
#define BASICSTATWITHDATAMESSAGE_H

#include "BasicStatMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/StatisticData.h"

#include <string>
#include <vector>

class BasicStatWithDataMessage : public BasicStatMessage {
public:
    std::vector<StatisticData> datas;

    void deserialize(CustomDataInput *input);

private:
    void _datasFunc(CustomDataInput *input);
};

#endif