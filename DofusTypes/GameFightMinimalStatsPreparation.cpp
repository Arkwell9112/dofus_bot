#include "GameFightMinimalStatsPreparation.h"
#include "GameFightMinimalStats.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightMinimalStatsPreparation::deserialize(CustomDataInput *input) {
    GameFightMinimalStats::deserialize(input);
    this->_initiativeFunc(input);
}

void GameFightMinimalStatsPreparation::_initiativeFunc(CustomDataInput *input) {
    this->initiative = input->readVarUhInt();
    if (this->initiative < 0) {

    }
}
