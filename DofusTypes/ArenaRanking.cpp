#include "ArenaRanking.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ArenaRanking::deserialize(CustomDataInput *input) {
    this->_rankFunc(input);
    this->_bestRankFunc(input);
}

void ArenaRanking::_rankFunc(CustomDataInput *input) {
    this->rank = input->readVarUhShort();
    if (this->rank < 0 || this->rank > 20000) {

    }
}

void ArenaRanking::_bestRankFunc(CustomDataInput *input) {
    this->bestRank = input->readVarUhShort();
    if (this->bestRank < 0 || this->bestRank > 20000) {

    }
}
