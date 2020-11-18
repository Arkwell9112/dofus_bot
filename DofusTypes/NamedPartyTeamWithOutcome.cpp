#include "NamedPartyTeamWithOutcome.h"
#include "NamedPartyTeam.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NamedPartyTeamWithOutcome::deserialize(CustomDataInput *input) {
    this->team.deserialize(input);
    this->_outcomeFunc(input);
}

void NamedPartyTeamWithOutcome::_outcomeFunc(CustomDataInput *input) {
    this->outcome = input->readVarUhShort();
    if (this->outcome < 0) {

    }
}
