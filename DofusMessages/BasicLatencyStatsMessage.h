#ifndef BASICLATENCYSTATSMESSAGE_H
#define BASICLATENCYSTATSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicLatencyStatsMessage : public DeserializeInterface {
public:
    unsigned int latency = 0;
    unsigned int sampleCount = 0;
    unsigned int max = 0;

    void deserialize(CustomDataInput *input);

private:
    void _latencyFunc(CustomDataInput *input);

    void _sampleCountFunc(CustomDataInput *input);

    void _maxFunc(CustomDataInput *input);
};

#endif