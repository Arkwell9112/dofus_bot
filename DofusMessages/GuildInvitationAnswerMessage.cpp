#include "GuildInvitationAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInvitationAnswerMessage::deserialize(CustomDataInput *input) {
    this->_acceptFunc(input);
}

void GuildInvitationAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
