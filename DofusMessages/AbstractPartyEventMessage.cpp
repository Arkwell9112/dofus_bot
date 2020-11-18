#include "AbstractPartyMessage.h"
#include "AbstractPartyEventMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractPartyEventMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
}