#include "JobBookSubscriptionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/JobBookSubscription.h"

void JobBookSubscriptionMessage::deserialize(CustomDataInput *input) {
    JobBookSubscription _item1;
    unsigned int _subscriptionsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _subscriptionsLen; _i1++) {
        _item1.deserialize(input);
        this->subscriptions.push_back(_item1);
    }
}