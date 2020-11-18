#include "InteractiveElementWithAgeBonus.h"
#include "InteractiveElement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveElementWithAgeBonus::deserialize(CustomDataInput *input) {
    InteractiveElement::deserialize(input);
    this->_ageBonusFunc(input);
}

void InteractiveElementWithAgeBonus::_ageBonusFunc(CustomDataInput *input) {
    this->ageBonus = input->readShort();
    if (this->ageBonus < -1 || this->ageBonus > 1000) {

    }
}
