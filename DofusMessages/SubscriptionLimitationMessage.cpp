#include "SubscriptionLimitationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SubscriptionLimitationMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void SubscriptionLimitationMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
