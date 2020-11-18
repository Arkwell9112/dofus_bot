#ifndef JOBBOOKSUBSCRIPTION_H
#define JOBBOOKSUBSCRIPTION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobBookSubscription : public DeserializeInterface {
public:
    unsigned int jobId = 0;
    bool subscribed = false;

    void deserialize(CustomDataInput *input);

private:
    void _jobIdFunc(CustomDataInput *input);

    void _subscribedFunc(CustomDataInput *input);
};

#endif