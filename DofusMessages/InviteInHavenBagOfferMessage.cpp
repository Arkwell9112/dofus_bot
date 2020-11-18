#include "InviteInHavenBagOfferMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InviteInHavenBagOfferMessage::deserialize(CustomDataInput *input) {
    this->hostInformations.deserialize(input);
    this->_timeLeftBeforeCancelFunc(input);
}

void InviteInHavenBagOfferMessage::_timeLeftBeforeCancelFunc(CustomDataInput *input) {
    this->timeLeftBeforeCancel = input->readVarInt();
}
