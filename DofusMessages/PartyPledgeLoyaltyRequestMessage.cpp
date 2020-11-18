#include "PartyPledgeLoyaltyRequestMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyPledgeLoyaltyRequestMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_loyalFunc(input);
}

void PartyPledgeLoyaltyRequestMessage::_loyalFunc(CustomDataInput *input) {
    this->loyal = input->readBoolean();
}
