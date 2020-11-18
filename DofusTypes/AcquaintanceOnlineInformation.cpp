#include "PlayerStatus.h"
#include "AcquaintanceOnlineInformation.h"
#include "AcquaintanceInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AcquaintanceOnlineInformation::deserialize(CustomDataInput *input) {
    AcquaintanceInformation::deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_moodSmileyIdFunc(input);
    unsigned int _id4 = input->readUnsignedShort();
    this->status = *dynamic_cast<PlayerStatus *>(ProtocolTypeManager::getInstance(_id4, input));
    ProtocolTypeManager::deleteLastInstance();

}

void AcquaintanceOnlineInformation::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void AcquaintanceOnlineInformation::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void AcquaintanceOnlineInformation::_moodSmileyIdFunc(CustomDataInput *input) {
    this->moodSmileyId = input->readVarUhShort();
    if (this->moodSmileyId < 0) {

    }
}
