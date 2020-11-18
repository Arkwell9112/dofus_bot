#include "InviteInHavenBagClosedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InviteInHavenBagClosedMessage::deserialize(CustomDataInput *input) {
    this->hostInformations.deserialize(input);
}