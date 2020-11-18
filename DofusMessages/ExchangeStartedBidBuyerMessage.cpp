#include "ExchangeStartedBidBuyerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartedBidBuyerMessage::deserialize(CustomDataInput *input) {
    this->buyerDescriptor.deserialize(input);
}