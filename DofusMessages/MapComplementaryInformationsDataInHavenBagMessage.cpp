#include "MapComplementaryInformationsDataMessage.h"
#include "MapComplementaryInformationsDataInHavenBagMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapComplementaryInformationsDataInHavenBagMessage::deserialize(CustomDataInput *input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->ownerInformations.deserialize(input);
    this->_themeFunc(input);
    this->_roomIdFunc(input);
    this->_maxRoomIdFunc(input);
}

void MapComplementaryInformationsDataInHavenBagMessage::_themeFunc(CustomDataInput *input) {
    this->theme = input->readByte();
}

void MapComplementaryInformationsDataInHavenBagMessage::_roomIdFunc(CustomDataInput *input) {
    this->roomId = input->readByte();
    if (this->roomId < 0) {

    }
}

void MapComplementaryInformationsDataInHavenBagMessage::_maxRoomIdFunc(CustomDataInput *input) {
    this->maxRoomId = input->readByte();
    if (this->maxRoomId < 0) {

    }
}
