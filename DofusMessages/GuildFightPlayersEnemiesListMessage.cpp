#include "GuildFightPlayersEnemiesListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/CharacterMinimalPlusLookInformations.h"

void GuildFightPlayersEnemiesListMessage::deserialize(CustomDataInput *input) {
    CharacterMinimalPlusLookInformations _item2;
    this->_fightIdFunc(input);
    unsigned int _playerInfoLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _playerInfoLen; _i2++) {
        _item2.deserialize(input);
        this->playerInfo.push_back(_item2);
    }
}

void GuildFightPlayersEnemiesListMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readDouble();
    if (this->fightId < 0 || this->fightId > 9007199254740990) {

    }
}
