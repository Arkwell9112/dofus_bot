#include "DungeonPartyFinderRoomContentMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/DungeonPartyFinderPlayer.h"

void DungeonPartyFinderRoomContentMessage::deserialize(CustomDataInput *input) {
    DungeonPartyFinderPlayer _item2;
    this->_dungeonIdFunc(input);
    unsigned int _playersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _playersLen; _i2++) {
        _item2.deserialize(input);
        this->players.push_back(_item2);
    }
}

void DungeonPartyFinderRoomContentMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}
