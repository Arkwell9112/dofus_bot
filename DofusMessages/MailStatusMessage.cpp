#include "MailStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MailStatusMessage::deserialize(CustomDataInput *input) {
    this->_unreadFunc(input);
    this->_totalFunc(input);
}

void MailStatusMessage::_unreadFunc(CustomDataInput *input) {
    this->unread = input->readVarUhShort();
    if (this->unread < 0) {

    }
}

void MailStatusMessage::_totalFunc(CustomDataInput *input) {
    this->total = input->readVarUhShort();
    if (this->total < 0) {

    }
}
