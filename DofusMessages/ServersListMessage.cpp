#include "ServersListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GameServerInformations.h"

void ServersListMessage::deserialize(CustomDataInput *input) {
    GameServerInformations _item1;
    unsigned int _serversLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _serversLen; _i1++) {
        _item1.deserialize(input);
        this->servers.push_back(_item1);
    }
    this->_alreadyConnectedToServerIdFunc(input);
    this->_canCreateNewCharacterFunc(input);
}

void ServersListMessage::_alreadyConnectedToServerIdFunc(CustomDataInput *input) {
    this->alreadyConnectedToServerId = input->readVarUhShort();
    if (this->alreadyConnectedToServerId < 0) {

    }
}

void ServersListMessage::_canCreateNewCharacterFunc(CustomDataInput *input) {
    this->canCreateNewCharacter = input->readBoolean();
}
