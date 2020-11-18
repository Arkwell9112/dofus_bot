#include "TreasureHuntStepFollowDirectionToPOI.h"
#include "TreasureHuntStepFollowDirection.h"
#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntStepFollowDirectionToPOI::deserialize(CustomDataInput *input) {
    TreasureHuntStep::deserialize(input);
    this->_directionFunc(input);
    this->_poiLabelIdFunc(input);
}

void TreasureHuntStepFollowDirectionToPOI::_directionFunc(CustomDataInput *input) {
    this->direction = input->readByte();
    if (this->direction < 0) {

    }
}

void TreasureHuntStepFollowDirectionToPOI::_poiLabelIdFunc(CustomDataInput *input) {
    this->poiLabelId = input->readVarUhShort();
    if (this->poiLabelId < 0) {

    }
}
