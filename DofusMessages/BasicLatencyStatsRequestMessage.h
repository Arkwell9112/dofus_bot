#ifndef BASICLATENCYSTATSREQUESTMESSAGE_H
#define BASICLATENCYSTATSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicLatencyStatsRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif