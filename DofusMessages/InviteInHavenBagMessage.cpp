#include "InviteInHavenBagMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InviteInHavenBagMessage::deserialize(CustomDataInput *input) {
    this->guestInformations.deserialize(input);
    this->_acceptFunc(input);
}

void InviteInHavenBagMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
