#include "MountInformationInPaddockRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountInformationInPaddockRequestMessage::deserialize(CustomDataInput *input) {
    this->_mapRideIdFunc(input);
}

void MountInformationInPaddockRequestMessage::_mapRideIdFunc(CustomDataInput *input) {
    this->mapRideId = input->readVarInt();
}
