#include "PartyInvitationDungeonDetailsMessage.h"
#include "PartyInvitationDetailsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationDungeonDetailsMessage::deserialize(CustomDataInput *input) {
    bool _val2 = false;
    PartyInvitationDetailsMessage::deserialize(input);
    this->_dungeonIdFunc(input);
    unsigned int _playersDungeonReadyLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _playersDungeonReadyLen; _i2++) {
        _val2 = input->readBoolean();
        this->playersDungeonReady.push_back(_val2);
    }
}

void PartyInvitationDungeonDetailsMessage::_dungeonIdFunc(CustomDataInput *input) {
    this->dungeonId = input->readVarUhShort();
    if (this->dungeonId < 0) {

    }
}

void PartyInvitationDungeonDetailsMessage::_playersDungeonReadyFunc(CustomDataInput *input) {
    bool _val = input->readBoolean();
    this->playersDungeonReady.push_back(_val);
}
