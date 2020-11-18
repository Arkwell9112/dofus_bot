#include "ChatSmileyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatSmileyMessage::deserialize(CustomDataInput *input) {
    this->_entityIdFunc(input);
    this->_smileyIdFunc(input);
    this->_accountIdFunc(input);
}

void ChatSmileyMessage::_entityIdFunc(CustomDataInput *input) {
    this->entityId = input->readDouble();
    if (this->entityId < -9007199254740990 || this->entityId > 9007199254740990) {

    }
}

void ChatSmileyMessage::_smileyIdFunc(CustomDataInput *input) {
    this->smileyId = input->readVarUhShort();
    if (this->smileyId < 0) {

    }
}

void ChatSmileyMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}
