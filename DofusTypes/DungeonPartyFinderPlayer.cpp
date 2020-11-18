#include "DungeonPartyFinderPlayer.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DungeonPartyFinderPlayer::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_levelFunc(input);
}

void DungeonPartyFinderPlayer::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void DungeonPartyFinderPlayer::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void DungeonPartyFinderPlayer::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void DungeonPartyFinderPlayer::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}

void DungeonPartyFinderPlayer::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}
