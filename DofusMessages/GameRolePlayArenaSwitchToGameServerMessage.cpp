#include "GameRolePlayArenaSwitchToGameServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaSwitchToGameServerMessage::deserialize(CustomDataInput *input) {
    int _val2 = 0;
    this->_validTokenFunc(input);
    unsigned int _ticketLen = input->readVarInt();
    for (unsigned int _i2 = 0; _i2 < _ticketLen; _i2++) {
        _val2 = input->readByte();
        this->ticket.push_back(_val2);
    }
    this->_homeServerIdFunc(input);
}

void GameRolePlayArenaSwitchToGameServerMessage::_validTokenFunc(CustomDataInput *input) {
    this->validToken = input->readBoolean();
}

void GameRolePlayArenaSwitchToGameServerMessage::_ticketFunc(CustomDataInput *input) {
    int _val = input->readByte();
    this->ticket.push_back(_val);
}

void GameRolePlayArenaSwitchToGameServerMessage::_homeServerIdFunc(CustomDataInput *input) {
    this->homeServerId = input->readShort();
}
