#include "LockableChangeCodeMessage.h"
#include "HouseLockFromInsideRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseLockFromInsideRequestMessage::deserialize(CustomDataInput *input) {
    LockableChangeCodeMessage::deserialize(input);
}