#include "TeleportToBuddyOfferMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportToBuddyOfferMessage::deserialize(CustomDataInput *input) {
    this->_dungeonIdFunc(input);
    this->_buddyIdFunc(input);
    this->_timeLeftFunc(input);
}

void TeleportToBuddyOfferMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}

void TeleportToBuddyOfferMessage::_buddyIdFunc(CustomDataInput *input) {
    this->buddyId = input->readVarUhLong();
    if (this->buddyId < 0 || this->buddyId > 9007199254740990) {

    }
}

void TeleportToBuddyOfferMessage::_timeLeftFunc(CustomDataInput *input) {
    this->timeLeft = input->readVarUhInt();
    if (this->timeLeft < 0) {

    }
}
