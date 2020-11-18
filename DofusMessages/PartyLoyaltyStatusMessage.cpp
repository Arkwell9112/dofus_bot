#include "PartyLoyaltyStatusMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyLoyaltyStatusMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_loyalFunc(input);
}

void PartyLoyaltyStatusMessage::_loyalFunc(CustomDataInput *input) {
    this->loyal = input->readBoolean();
}
