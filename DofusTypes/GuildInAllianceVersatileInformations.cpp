#include "GuildVersatileInformations.h"
#include "GuildInAllianceVersatileInformations.h"
#include "AllianceVersatileInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInAllianceVersatileInformations::deserialize(CustomDataInput *input) {
    GuildVersatileInformations::deserialize(input);
    this->_allianceIdFunc(input);
}

void GuildInAllianceVersatileInformations::_allianceIdFunc(CustomDataInput *input) {
    this->allianceId = input->readVarUhInt();
    if (this->allianceId < 0) {

    }
}
