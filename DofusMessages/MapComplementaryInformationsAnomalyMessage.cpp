#include "MapComplementaryInformationsDataMessage.h"
#include "MapComplementaryInformationsAnomalyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapComplementaryInformationsAnomalyMessage::deserialize(CustomDataInput *input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->_levelFunc(input);
    this->_closingTimeFunc(input);
}

void MapComplementaryInformationsAnomalyMessage::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void MapComplementaryInformationsAnomalyMessage::_closingTimeFunc(CustomDataInput *input) {
    this->closingTime = input->readVarUhLong();
    if (this->closingTime < 0 || this->closingTime > 9007199254740990) {

    }
}
