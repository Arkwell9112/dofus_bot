#include "HousePropertiesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInstanceInformations.h"

void HousePropertiesMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    this->_houseIdFunc(input);
    unsigned int _doorsOnMapLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _doorsOnMapLen; _i2++) {
        _val2 = input->readInt();
        if (_val2 < 0) {

        }
        this->doorsOnMap.push_back(_val2);
    }
    unsigned int _id3 = input->readUnsignedShort();
    this->properties = *dynamic_cast<HouseInstanceInformations *>(ProtocolTypeManager::getInstance(_id3, input));
    ProtocolTypeManager::deleteLastInstance();

}

void HousePropertiesMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HousePropertiesMessage::_doorsOnMapFunc(CustomDataInput *input) {
    unsigned int _val = input->readInt();
    if (_val < 0) {

    }
    this->doorsOnMap.push_back(_val);
}
