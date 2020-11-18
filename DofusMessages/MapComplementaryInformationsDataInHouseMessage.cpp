#include "MapComplementaryInformationsDataMessage.h"
#include "MapComplementaryInformationsDataInHouseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapComplementaryInformationsDataInHouseMessage::deserialize(CustomDataInput *input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->currentHouse.deserialize(input);
}