#include "HumanOptionAlliance.h"
#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionAlliance::deserialize(CustomDataInput *input) {
    HumanOption::deserialize(input);
    this->allianceInformations.deserialize(input);
    this->_aggressableFunc(input);
}

void HumanOptionAlliance::_aggressableFunc(CustomDataInput *input) {
    this->aggressable = input->readByte();
    if (this->aggressable < 0) {

    }
}
