#include "HavenBagRoomUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HavenBagRoomPreviewInformation.h"

void HavenBagRoomUpdateMessage::deserialize(CustomDataInput *input) {
    HavenBagRoomPreviewInformation _item2;
    this->_actionFunc(input);
    unsigned int _roomsPreviewLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _roomsPreviewLen; _i2++) {
        _item2.deserialize(input);
        this->roomsPreview.push_back(_item2);
    }
}

void HavenBagRoomUpdateMessage::_actionFunc(CustomDataInput *input) {
    this->action = input->readByte();
    if (this->action < 0) {

    }
}
