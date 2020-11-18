#include "TeleportToBuddyAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportToBuddyAnswerMessage::deserialize(CustomDataInput *input) {
    this->_dungeonIdFunc(input);
    this->_buddyIdFunc(input);
    this->_acceptFunc(input);
}

void TeleportToBuddyAnswerMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}

void TeleportToBuddyAnswerMessage::_buddyIdFunc(CustomDataInput *input) {
    this->buddyId = input->readVarUhLong();
    if (this->buddyId < 0 || this->buddyId > 9007199254740990) {

    }
}

void TeleportToBuddyAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
