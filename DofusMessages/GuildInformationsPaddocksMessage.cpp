#include "GuildInformationsPaddocksMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PaddockContentInformations.h"

#include "../DofusTypes/GuildInformations.h"

void GuildInformationsPaddocksMessage::deserialize(CustomDataInput *input) {
    PaddockContentInformations _item2;
    this->_nbPaddockMaxFunc(input);
    unsigned int _paddocksInformationsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _paddocksInformationsLen; _i2++) {
        _item2.deserialize(input);
        this->paddocksInformations.push_back(_item2);
    }
}

void GuildInformationsPaddocksMessage::_nbPaddockMaxFunc(CustomDataInput *input) {
    this->nbPaddockMax = input->readByte();
    if (this->nbPaddockMax < 0) {

    }
}
