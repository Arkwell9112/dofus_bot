#include "MapRunningFightDetailsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapRunningFightDetailsRequestMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
}

void MapRunningFightDetailsRequestMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}
