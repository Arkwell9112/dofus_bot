#include "AuthenticationTicketMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AuthenticationTicketMessage::deserialize(CustomDataInput *input) {
    this->_langFunc(input);
    this->_ticketFunc(input);
}

void AuthenticationTicketMessage::_langFunc(CustomDataInput *input) {
    this->lang = input->readUTF();
}

void AuthenticationTicketMessage::_ticketFunc(CustomDataInput *input) {
    this->ticket = input->readUTF();
}
