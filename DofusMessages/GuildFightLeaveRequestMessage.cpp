#include "GuildFightLeaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFightLeaveRequestMessage::deserialize(CustomDataInput *input) {
    this->_taxCollectorIdFunc(input);
    this->_characterIdFunc(input);
}

void GuildFightLeaveRequestMessage::_taxCollectorIdFunc(CustomDataInput *input) {
    this->taxCollectorId = input->readDouble();
    if (this->taxCollectorId < 0 || this->taxCollectorId > 9007199254740990) {

    }
}

void GuildFightLeaveRequestMessage::_characterIdFunc(CustomDataInput *input) {
    this->characterId = input->readVarUhLong();
    if (this->characterId < 0 || this->characterId > 9007199254740990) {

    }
}
