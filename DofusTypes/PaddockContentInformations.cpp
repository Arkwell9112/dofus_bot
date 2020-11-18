#include "PaddockInformations.h"
#include "PaddockContentInformations.h"
#include "MountInformationsForPaddock.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockContentInformations::deserialize(CustomDataInput *input) {
    MountInformationsForPaddock _item7;
    PaddockInformations::deserialize(input);
    this->_paddockIdFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_abandonnedFunc(input);
    unsigned int _mountsInformationsLen = input->readUnsignedShort();
    for (unsigned int _i7 = 0; _i7 < _mountsInformationsLen; _i7++) {
        _item7.deserialize(input);
        this->mountsInformations.push_back(_item7);
    }
}

void PaddockContentInformations::_paddockIdFunc(CustomDataInput *input) {
    this->paddockId = input->readDouble();
    if (this->paddockId < 0 || this->paddockId > 9007199254740990) {

    }
}

void PaddockContentInformations::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void PaddockContentInformations::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void PaddockContentInformations::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void PaddockContentInformations::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PaddockContentInformations::_abandonnedFunc(CustomDataInput *input) {
    this->abandonned = input->readBoolean();
}
