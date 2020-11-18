#include "PartyFollowStatusUpdateMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyFollowStatusUpdateMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_followedIdFunc(input);
}

void PartyFollowStatusUpdateMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->success = BooleanByteWrapper::getFlag(_box0, 0);
    this->isFollowed = BooleanByteWrapper::getFlag(_box0, 1);
}

void PartyFollowStatusUpdateMessage::_followedIdFunc(CustomDataInput *input) {
    this->followedId = input->readVarUhLong();
    if (this->followedId < 0 || this->followedId > 9007199254740990) {

    }
}
