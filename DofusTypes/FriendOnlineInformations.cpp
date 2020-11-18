#include "PlayerStatus.h"
#include "FriendOnlineInformations.h"
#include "FriendInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendOnlineInformations::deserialize(CustomDataInput *input) {
    FriendInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_levelFunc(input);
    this->_alignmentSideFunc(input);
    this->_breedFunc(input);
    this->guildInfo.deserialize(input);
    this->_moodSmileyIdFunc(input);
    unsigned int _id9 = input->readUnsignedShort();
    this->status = *dynamic_cast<PlayerStatus *>(ProtocolTypeManager::getInstance(_id9, input));
    ProtocolTypeManager::deleteLastInstance();

}

void FriendOnlineInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->havenBagShared = BooleanByteWrapper::getFlag(_box0, 1);
}

void FriendOnlineInformations::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void FriendOnlineInformations::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void FriendOnlineInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void FriendOnlineInformations::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}

void FriendOnlineInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void FriendOnlineInformations::_moodSmileyIdFunc(CustomDataInput *input) {
    this->moodSmileyId = input->readVarUhShort();
    if (this->moodSmileyId < 0) {

    }
}
