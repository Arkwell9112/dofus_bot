#include "TreasureHuntStepFollowDirection.h"
#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntStepFollowDirection::deserialize(CustomDataInput *input) {
    TreasureHuntStep::deserialize(input);
    this->_directionFunc(input);
    this->_mapCountFunc(input);
}

void TreasureHuntStepFollowDirection::_directionFunc(CustomDataInput *input) {
    this->direction = input->readByte();
    if (this->direction < 0) {

    }
}

void TreasureHuntStepFollowDirection::_mapCountFunc(CustomDataInput *input) {
    this->mapCount = input->readVarUhShort();
    if (this->mapCount < 0) {

    }
}
