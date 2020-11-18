#include "AcquaintanceInformation.h"
#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AcquaintanceInformation::deserialize(CustomDataInput *input) {
    AbstractContactInformations::deserialize(input);
    this->_playerStateFunc(input);
}

void AcquaintanceInformation::_playerStateFunc(CustomDataInput *input) {
    this->playerState = input->readByte();
    if (this->playerState < 0) {

    }
}
