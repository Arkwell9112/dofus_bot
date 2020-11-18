#include "MoodSmileyUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MoodSmileyUpdateMessage::deserialize(CustomDataInput *input) {
    this->_accountIdFunc(input);
    this->_playerIdFunc(input);
    this->_smileyIdFunc(input);
}

void MoodSmileyUpdateMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void MoodSmileyUpdateMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void MoodSmileyUpdateMessage::_smileyIdFunc(CustomDataInput *input) {
    this->smileyId = input->readVarUhShort();
    if (this->smileyId < 0) {

    }
}
