#include "ActorAlignmentInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ActorAlignmentInformations::deserialize(CustomDataInput *input) {
    this->_alignmentSideFunc(input);
    this->_alignmentValueFunc(input);
    this->_alignmentGradeFunc(input);
    this->_characterPowerFunc(input);
}

void ActorAlignmentInformations::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}

void ActorAlignmentInformations::_alignmentValueFunc(CustomDataInput *input) {
    this->alignmentValue = input->readByte();
    if (this->alignmentValue < 0) {

    }
}

void ActorAlignmentInformations::_alignmentGradeFunc(CustomDataInput *input) {
    this->alignmentGrade = input->readByte();
    if (this->alignmentGrade < 0) {

    }
}

void ActorAlignmentInformations::_characterPowerFunc(CustomDataInput *input) {
    this->characterPower = input->readDouble();
    if (this->characterPower < -9007199254740990 || this->characterPower > 9007199254740990) {

    }
}
