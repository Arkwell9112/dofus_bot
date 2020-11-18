#include "HavenBagRoomPreviewInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HavenBagRoomPreviewInformation::deserialize(CustomDataInput *input) {
    this->_roomIdFunc(input);
    this->_themeIdFunc(input);
}

void HavenBagRoomPreviewInformation::_roomIdFunc(CustomDataInput *input) {
    this->roomId = input->readUnsignedByte();
    if (this->roomId < 0 || this->roomId > 255) {

    }
}

void HavenBagRoomPreviewInformation::_themeIdFunc(CustomDataInput *input) {
    this->themeId = input->readByte();
}
