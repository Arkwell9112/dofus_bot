#include "HouseInstanceInformations.h"
#include "HouseInformationsInside.h"
#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseInformationsInside::deserialize(CustomDataInput *input) {
    HouseInformations::deserialize(input);
    unsigned int _id1 = input->readUnsignedShort();
    this->houseInfos = *dynamic_cast<HouseInstanceInformations *>(ProtocolTypeManager::getInstance(_id1, input));
    ProtocolTypeManager::deleteLastInstance();

    this->_worldXFunc(input);
    this->_worldYFunc(input);
}

void HouseInformationsInside::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void HouseInformationsInside::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}
