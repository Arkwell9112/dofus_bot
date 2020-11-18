#include "SelectedServerDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SelectedServerDataMessage::deserialize(CustomDataInput *input) {
    unsigned int _val3 = 0;
    int _val5 = 0;
    this->_serverIdFunc(input);
    this->_addressFunc(input);
    unsigned int _portsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _portsLen; _i3++) {
        _val3 = input->readVarUhShort();
        if (_val3 < 0) {

        }
        this->ports.push_back(_val3);
    }
    this->_canCreateNewCharacterFunc(input);
    unsigned int _ticketLen = input->readVarInt();
    for (unsigned int _i5 = 0; _i5 < _ticketLen; _i5++) {
        _val5 = input->readByte();
        this->ticket.push_back(_val5);
    }
}

void SelectedServerDataMessage::_serverIdFunc(CustomDataInput *input) {
    this->serverId = input->readVarUhShort();
    if (this->serverId < 0) {

    }
}

void SelectedServerDataMessage::_addressFunc(CustomDataInput *input) {
    this->address = input->readUTF();
}

void SelectedServerDataMessage::_portsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->ports.push_back(_val);
}

void SelectedServerDataMessage::_canCreateNewCharacterFunc(CustomDataInput *input) {
    this->canCreateNewCharacter = input->readBoolean();
}

void SelectedServerDataMessage::_ticketFunc(CustomDataInput *input) {
    int _val = input->readByte();
    this->ticket.push_back(_val);
}
