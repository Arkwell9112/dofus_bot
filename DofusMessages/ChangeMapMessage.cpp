#include "ChangeMapMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChangeMapMessage::deserialize(CustomDataInput *input) {
    this->_mapIdFunc(input);
    this->_autopilotFunc(input);
}

void ChangeMapMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void ChangeMapMessage::_autopilotFunc(CustomDataInput *input) {
    this->autopilot = input->readBoolean();
}
