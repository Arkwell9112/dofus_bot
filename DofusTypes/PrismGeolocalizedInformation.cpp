#include "PrismSubareaEmptyInfo.h"
#include "PrismInformation.h"
#include "PrismGeolocalizedInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismGeolocalizedInformation::deserialize(CustomDataInput *input) {
    PrismSubareaEmptyInfo::deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    unsigned int _id4 = input->readUnsignedShort();
    this->prism = *dynamic_cast<PrismInformation *>(ProtocolTypeManager::getInstance(_id4, input));
    ProtocolTypeManager::deleteLastInstance();

}

void PrismGeolocalizedInformation::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void PrismGeolocalizedInformation::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void PrismGeolocalizedInformation::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}
