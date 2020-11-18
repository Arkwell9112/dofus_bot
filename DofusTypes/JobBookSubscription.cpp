#include "JobBookSubscription.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void JobBookSubscription::deserialize(CustomDataInput *input) {
    this->_jobIdFunc(input);
    this->_subscribedFunc(input);
}

void JobBookSubscription::_jobIdFunc(CustomDataInput *input) {
    this->jobId = input->readByte();
    if (this->jobId < 0) {

    }
}

void JobBookSubscription::_subscribedFunc(CustomDataInput *input) {
    this->subscribed = input->readBoolean();
}
