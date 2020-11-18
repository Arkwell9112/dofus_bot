#include "GameRolePlayArenaSwitchToFightServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaSwitchToFightServerMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    int _val3 = 0;
    this->_addressFunc(input);
    unsigned int _portsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _portsLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->ports.push_back(_val2);
    }
    unsigned int _ticketLen = input->readVarInt();
    for (unsigned int _i3 = 0; _i3 < _ticketLen; _i3++) {
        _val3 = input->readByte();
        this->ticket.push_back(_val3);
    }
}

void GameRolePlayArenaSwitchToFightServerMessage::_addressFunc(CustomDataInput *input) {
    this->address = input->readUTF();
}

void GameRolePlayArenaSwitchToFightServerMessage::_portsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->ports.push_back(_val);
}

void GameRolePlayArenaSwitchToFightServerMessage::_ticketFunc(CustomDataInput *input) {
    int _val = input->readByte();
    this->ticket.push_back(_val);
}
