#include "TreasureHuntStepFollowDirectionToHint.h"
#include "TreasureHuntStepFollowDirection.h"
#include "TreasureHuntStep.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntStepFollowDirectionToHint::deserialize(CustomDataInput *input) {
    TreasureHuntStep::deserialize(input);
    this->_directionFunc(input);
    this->_npcIdFunc(input);
}

void TreasureHuntStepFollowDirectionToHint::_directionFunc(CustomDataInput *input) {
    this->direction = input->readByte();
    if (this->direction < 0) {

    }
}

void TreasureHuntStepFollowDirectionToHint::_npcIdFunc(CustomDataInput *input) {
    this->npcId = input->readVarUhShort();
    if (this->npcId < 0) {

    }
}
