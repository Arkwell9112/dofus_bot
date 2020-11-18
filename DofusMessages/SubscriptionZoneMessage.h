#ifndef SUBSCRIPTIONZONEMESSAGE_H
#define SUBSCRIPTIONZONEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SubscriptionZoneMessage : public DeserializeInterface {
public:
    bool active = false;

    void deserialize(CustomDataInput *input);

private:
    void _activeFunc(CustomDataInput *input);
};

#endif