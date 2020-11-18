#include "TeleportToBuddyCloseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportToBuddyCloseMessage::deserialize(CustomDataInput *input) {
    this->_dungeonIdFunc(input);
    this->_buddyIdFunc(input);
}

void TeleportToBuddyCloseMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}

void TeleportToBuddyCloseMessage::_buddyIdFunc(CustomDataInput *input) {
    this->buddyId = input->readVarUhLong();
    if (this->buddyId < 0 || this->buddyId > 9007199254740990) {

    }
}
