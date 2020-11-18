#include "TeleportDestination.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TeleportDestination::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_levelFunc(input);
    this->_costFunc(input);
}

void TeleportDestination::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}

void TeleportDestination::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void TeleportDestination::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void TeleportDestination::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}

void TeleportDestination::_costFunc(CustomDataInput *input) {
    this->cost = input->readVarUhShort();
    if (this->cost < 0) {

    }
}
