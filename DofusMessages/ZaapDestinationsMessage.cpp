#include "ZaapDestinationsMessage.h"
#include "TeleportDestinationsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TeleportDestination.h"

void ZaapDestinationsMessage::deserialize(CustomDataInput *input) {
    TeleportDestinationsMessage::deserialize(input);
    this->_spawnMapIdFunc(input);
}

void ZaapDestinationsMessage::_spawnMapIdFunc(CustomDataInput *input) {
    this->spawnMapId = input->readDouble();
    if (this->spawnMapId < 0 || this->spawnMapId > 9007199254740990) {

    }
}
