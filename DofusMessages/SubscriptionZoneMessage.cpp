#include "SubscriptionZoneMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SubscriptionZoneMessage::deserialize(CustomDataInput *input) {
    this->_activeFunc(input);
}

void SubscriptionZoneMessage::_activeFunc(CustomDataInput *input) {
    this->active = input->readBoolean();
}
