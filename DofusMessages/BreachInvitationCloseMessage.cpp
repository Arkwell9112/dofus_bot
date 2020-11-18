#include "BreachInvitationCloseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachInvitationCloseMessage::deserialize(CustomDataInput *input) {
    this->host.deserialize(input);
}