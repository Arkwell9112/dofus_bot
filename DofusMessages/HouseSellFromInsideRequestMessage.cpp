#include "HouseSellRequestMessage.h"
#include "HouseSellFromInsideRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseSellFromInsideRequestMessage::deserialize(CustomDataInput *input) {
    HouseSellRequestMessage::deserialize(input);
}