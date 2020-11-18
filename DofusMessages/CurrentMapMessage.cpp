#include "CurrentMapMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CurrentMapMessage::deserialize(CustomDataInput *input) {
    this->_mapIdFunc(input);
    this->_mapKeyFunc(input);
}

void CurrentMapMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void CurrentMapMessage::_mapKeyFunc(CustomDataInput *input) {
    this->mapKey = input->readUTF();
}
