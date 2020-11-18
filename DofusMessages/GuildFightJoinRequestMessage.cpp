#include "GuildFightJoinRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFightJoinRequestMessage::deserialize(CustomDataInput *input) {
    this->_taxCollectorIdFunc(input);
}

void GuildFightJoinRequestMessage::_taxCollectorIdFunc(CustomDataInput *input) {
    this->taxCollectorId = input->readDouble();
    if (this->taxCollectorId < 0 || this->taxCollectorId > 9007199254740990) {

    }
}
