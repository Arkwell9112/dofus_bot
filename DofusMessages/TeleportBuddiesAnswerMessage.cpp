#include "TeleportBuddiesAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportBuddiesAnswerMessage::deserialize(CustomDataInput *input) {
    this->_acceptFunc(input);
}

void TeleportBuddiesAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
