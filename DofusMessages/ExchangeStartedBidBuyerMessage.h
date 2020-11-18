#ifndef EXCHANGESTARTEDBIDBUYERMESSAGE_H
#define EXCHANGESTARTEDBIDBUYERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SellerBuyerDescriptor.h"

#include <string>
#include <vector>

class ExchangeStartedBidBuyerMessage : public DeserializeInterface {
public:
    SellerBuyerDescriptor buyerDescriptor;

    void deserialize(CustomDataInput *input);

private:
};

#endif