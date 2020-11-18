#include "IgnoredOnlineInformations.h"
#include "IgnoredInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IgnoredOnlineInformations::deserialize(CustomDataInput *input) {
    IgnoredInformations::deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
}

void IgnoredOnlineInformations::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void IgnoredOnlineInformations::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void IgnoredOnlineInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void IgnoredOnlineInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}
