#include "TeleportRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportRequestMessage::deserialize(CustomDataInput *input) {
    this->_sourceTypeFunc(input);
    this->_destinationTypeFunc(input);
    this->_mapIdFunc(input);
}

void TeleportRequestMessage::_sourceTypeFunc(CustomDataInput *input) {
    this->sourceType = input->readByte();
    if (this->sourceType < 0) {

    }
}

void TeleportRequestMessage::_destinationTypeFunc(CustomDataInput *input) {
    this->destinationType = input->readByte();
    if (this->destinationType < 0) {

    }
}

void TeleportRequestMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}
