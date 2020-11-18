#include "GuildFightTakePlaceRequestMessage.h"
#include "GuildFightJoinRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildFightTakePlaceRequestMessage::deserialize(CustomDataInput *input) {
    GuildFightJoinRequestMessage::deserialize(input);
    this->_replacedCharacterIdFunc(input);
}

void GuildFightTakePlaceRequestMessage::_replacedCharacterIdFunc(CustomDataInput *input) {
    this->replacedCharacterId = input->readInt();
}
