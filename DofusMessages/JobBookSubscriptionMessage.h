#ifndef JOBBOOKSUBSCRIPTIONMESSAGE_H
#define JOBBOOKSUBSCRIPTIONMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobBookSubscription.h"

#include <string>
#include <vector>

class JobBookSubscriptionMessage : public DeserializeInterface {
public:
    std::vector<JobBookSubscription> subscriptions;

    void deserialize(CustomDataInput *input);

private:
};

#endif