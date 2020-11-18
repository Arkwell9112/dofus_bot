#include "CompassUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MapCoordinates.h"

void CompassUpdateMessage::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
    unsigned int _id2 = input->readUnsignedShort();
    this->coords = *dynamic_cast<MapCoordinates *>(ProtocolTypeManager::getInstance(_id2, input));
    ProtocolTypeManager::deleteLastInstance();

}

void CompassUpdateMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
