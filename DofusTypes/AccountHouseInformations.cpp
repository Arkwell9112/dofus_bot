#include "HouseInstanceInformations.h"
#include "HouseInformations.h"
#include "AccountHouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AccountHouseInformations::deserialize(CustomDataInput *input) {
    HouseInformations::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->houseInfos = *dynamic_cast<HouseInstanceInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void AccountHouseInformations::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void AccountHouseInformations::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void AccountHouseInformations::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void AccountHouseInformations::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
