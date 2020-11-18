#include "PlayerStatusUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PlayerStatus.h"

void PlayerStatusUpdateMessage::deserialize(CustomDataInput *input) {
    this->_accountIdFunc(input);
    this->_playerIdFunc(input);
    unsigned int _id3 = input->readUnsignedShort();
    this->status = *dynamic_cast<PlayerStatus *>(ProtocolTypeManager::getInstance(_id3, input));
    ProtocolTypeManager::deleteLastInstance();

}

void PlayerStatusUpdateMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void PlayerStatusUpdateMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
