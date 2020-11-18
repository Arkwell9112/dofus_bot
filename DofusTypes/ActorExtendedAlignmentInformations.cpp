#include "ActorExtendedAlignmentInformations.h"
#include "ActorAlignmentInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ActorExtendedAlignmentInformations::deserialize(CustomDataInput *input) {
    ActorAlignmentInformations::deserialize(input);
    this->_honorFunc(input);
    this->_honorGradeFloorFunc(input);
    this->_honorNextGradeFloorFunc(input);
    this->_aggressableFunc(input);
}

void ActorExtendedAlignmentInformations::_honorFunc(CustomDataInput *input) {
    this->honor = input->readVarUhShort();
    if (this->honor < 0 || this->honor > 20000) {

    }
}

void ActorExtendedAlignmentInformations::_honorGradeFloorFunc(CustomDataInput *input) {
    this->honorGradeFloor = input->readVarUhShort();
    if (this->honorGradeFloor < 0 || this->honorGradeFloor > 20000) {

    }
}

void ActorExtendedAlignmentInformations::_honorNextGradeFloorFunc(CustomDataInput *input) {
    this->honorNextGradeFloor = input->readVarUhShort();
    if (this->honorNextGradeFloor < 0 || this->honorNextGradeFloor > 20000) {

    }
}

void ActorExtendedAlignmentInformations::_aggressableFunc(CustomDataInput *input) {
    this->aggressable = input->readByte();
    if (this->aggressable < 0) {

    }
}
