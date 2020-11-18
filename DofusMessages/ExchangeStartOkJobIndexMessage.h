#ifndef EXCHANGESTARTOKJOBINDEXMESSAGE_H
#define EXCHANGESTARTOKJOBINDEXMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExchangeStartOkJobIndexMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> jobs;

    void deserialize(CustomDataInput *input);

private:
    void _jobsFunc(CustomDataInput *input);
};

#endif