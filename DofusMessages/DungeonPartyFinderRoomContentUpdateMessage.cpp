#include "DungeonPartyFinderRoomContentUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/DungeonPartyFinderPlayer.h"

void DungeonPartyFinderRoomContentUpdateMessage::deserialize(CustomDataInput *input) {
    DungeonPartyFinderPlayer _item2;
    double _val3 = 0;
    this->_dungeonIdFunc(input);
    unsigned int _addedPlayersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _addedPlayersLen; _i2++) {
        _item2.deserialize(input);
        this->addedPlayers.push_back(_item2);
    }
    unsigned int _removedPlayersIdsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _removedPlayersIdsLen; _i3++) {
        _val3 = input->readVarUhLong();
        if (_val3 < 0 || _val3 > 9007199254740990) {

        }
        this->removedPlayersIds.push_back(_val3);
    }
}

void DungeonPartyFinderRoomContentUpdateMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}

void DungeonPartyFinderRoomContentUpdateMessage::_removedPlayersIdsFunc(CustomDataInput *input) {
    double _val = input->readVarUhLong();
    if (_val < 0 || _val > 9007199254740990) {

    }
    this->removedPlayersIds.push_back(_val);
}
