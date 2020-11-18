#include "UpdateMountCharacteristicsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/UpdateMountCharacteristic.h"

void UpdateMountCharacteristicsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    UpdateMountCharacteristic _item2;
    this->_rideIdFunc(input);
    unsigned int _boostToUpdateListLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _boostToUpdateListLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<UpdateMountCharacteristic *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->boostToUpdateList.push_back(_item2);
    }
}

void UpdateMountCharacteristicsMessage::_rideIdFunc(CustomDataInput *input) {
    this->rideId = input->readVarInt();
}

void UpdateMountCharacteristicsMessage::_boostToUpdateListFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    UpdateMountCharacteristic _item;
    _item.deserialize(input);
    this->boostToUpdateList.push_back(_item);
}
