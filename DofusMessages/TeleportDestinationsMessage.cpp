#include "TeleportDestinationsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TeleportDestination.h"

void TeleportDestinationsMessage::deserialize(CustomDataInput *input) {
    TeleportDestination _item2;
    this->_typeFunc(input);
    unsigned int _destinationsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _destinationsLen; _i2++) {
        _item2.deserialize(input);
        this->destinations.push_back(_item2);
    }
}

void TeleportDestinationsMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
