#include "ErrorMapNotFoundMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ErrorMapNotFoundMessage::deserialize(CustomDataInput *input) {
    this->_mapIdFunc(input);
}

void ErrorMapNotFoundMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}
