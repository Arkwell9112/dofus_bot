#include "ChallengeFightJoinRefusedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChallengeFightJoinRefusedMessage::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
    this->_reasonFunc(input);
}

void ChallengeFightJoinRefusedMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void ChallengeFightJoinRefusedMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
}
