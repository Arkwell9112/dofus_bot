#include "CharacterMinimalPlusLookInformations.h"
#include "CharacterMinimalPlusLookAndGradeInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterMinimalPlusLookAndGradeInformations::deserialize(CustomDataInput *input) {
    CharacterMinimalPlusLookInformations::deserialize(input);
    this->_gradeFunc(input);
}

void CharacterMinimalPlusLookAndGradeInformations::_gradeFunc(CustomDataInput *input) {
    this->grade = input->readVarUhInt();
    if (this->grade < 0) {

    }
}
