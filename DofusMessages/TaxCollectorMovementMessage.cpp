#include "TaxCollectorMovementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TaxCollectorMovement.h"

void TaxCollectorMovementMessage::deserialize(CustomDataInput *input) {
    this->_movementTypeFunc(input);
    this->basicInfos.deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
}

void TaxCollectorMovementMessage::_movementTypeFunc(CustomDataInput *input) {
    this->movementType = input->readByte();
    if (this->movementType < 0) {

    }
}

void TaxCollectorMovementMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void TaxCollectorMovementMessage::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}
