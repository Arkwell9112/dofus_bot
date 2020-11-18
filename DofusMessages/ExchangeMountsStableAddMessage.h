#ifndef EXCHANGEMOUNTSSTABLEADDMESSAGE_H
#define EXCHANGEMOUNTSSTABLEADDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MountClientData.h"

#include <string>
#include <vector>

class ExchangeMountsStableAddMessage : public DeserializeInterface {
public:
    std::vector<MountClientData> mountDescription;

    void deserialize(CustomDataInput *input);

private:
};

#endif