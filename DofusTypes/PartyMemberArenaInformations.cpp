#include "PartyMemberInformations.h"
#include "PartyMemberArenaInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyMemberArenaInformations::deserialize(CustomDataInput *input) {
    PartyMemberInformations::deserialize(input);
    this->_rankFunc(input);
}

void PartyMemberArenaInformations::_rankFunc(CustomDataInput *input) {
    this->rank = input->readVarUhShort();
    if (this->rank < 0 || this->rank > 20000) {

    }
}
