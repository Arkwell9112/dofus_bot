#include "TeleportBuddiesRequestedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportBuddiesRequestedMessage::deserialize(CustomDataInput *input) {
    double _val3 = 0;
    this->_dungeonIdFunc(input);
    this->_inviterIdFunc(input);
    unsigned int _invalidBuddiesIdsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _invalidBuddiesIdsLen; _i3++) {
        _val3 = input->readVarUhLong();
        if (_val3 < 0 || _val3 > 9007199254740990) {

        }
        this->invalidBuddiesIds.push_back(_val3);
    }
}

void TeleportBuddiesRequestedMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}

void TeleportBuddiesRequestedMessage::_inviterIdFunc(CustomDataInput *input) {
    this->inviterId = input->readVarUhLong();
    if (this->inviterId < 0 || this->inviterId > 9007199254740990) {

    }
}

void TeleportBuddiesRequestedMessage::_invalidBuddiesIdsFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->invalidBuddiesIds.push_back(_val);
}
