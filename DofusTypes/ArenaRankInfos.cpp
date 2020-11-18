#include "ArenaRankInfos.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ArenaRankInfos::deserialize(CustomDataInput *input) {
    if (input->readByte() == 0) {

    } else {
        this->ranking.deserialize(input);
    }
    if (input->readByte() == 0) {

    } else {
        this->leagueRanking.deserialize(input);
    }
    this->_victoryCountFunc(input);
    this->_fightcountFunc(input);
    this->_numFightNeededForLadderFunc(input);
}

void ArenaRankInfos::_victoryCountFunc(CustomDataInput *input) {
    this->victoryCount = input->readVarUhShort();
    if (this->victoryCount < 0) {

    }
}

void ArenaRankInfos::_fightcountFunc(CustomDataInput *input) {
    this->fightcount = input->readVarUhShort();
    if (this->fightcount < 0) {

    }
}

void ArenaRankInfos::_numFightNeededForLadderFunc(CustomDataInput *input) {
    this->numFightNeededForLadder = input->readShort();
    if (this->numFightNeededForLadder < 0) {

    }
}
