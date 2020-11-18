#ifndef EXCHANGEREPLAYSTOPMESSAGE_H
#define EXCHANGEREPLAYSTOPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeReplayStopMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif