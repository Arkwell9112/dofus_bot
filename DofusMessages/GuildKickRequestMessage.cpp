#include "GuildKickRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildKickRequestMessage::deserialize(CustomDataInput *input) {
    this->_kickedIdFunc(input);
}

void GuildKickRequestMessage::_kickedIdFunc(CustomDataInput *input) {
    this->kickedId = input->readVarUhLong();
    if (this->kickedId < 0 || this->kickedId > 9007199254740990) {

    }
}
