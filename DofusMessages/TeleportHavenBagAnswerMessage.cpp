#include "TeleportHavenBagAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportHavenBagAnswerMessage::deserialize(CustomDataInput *input) {
    this->_acceptFunc(input);
}

void TeleportHavenBagAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
