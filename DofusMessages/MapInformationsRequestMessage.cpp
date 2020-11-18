#include "MapInformationsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapInformationsRequestMessage::deserialize(CustomDataInput *input) {
    this->_mapIdFunc(input);
}

void MapInformationsRequestMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}
