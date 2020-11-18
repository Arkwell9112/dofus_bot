#include "AccountInformationsUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AccountInformationsUpdateMessage::deserialize(CustomDataInput *input) {
    this->_subscriptionEndDateFunc(input);
}

void AccountInformationsUpdateMessage::_subscriptionEndDateFunc(CustomDataInput *input) {
    this->subscriptionEndDate = input->readDouble();
    if (this->subscriptionEndDate < 0 || this->subscriptionEndDate > 9007199254740990) {

    }
}
