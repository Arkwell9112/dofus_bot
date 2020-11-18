#include "PartyMemberGeoPosition.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyMemberGeoPosition::deserialize(CustomDataInput *input) {
    this->_memberIdFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void PartyMemberGeoPosition::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readInt();
    if (this->memberId < 0) {

    }
}

void PartyMemberGeoPosition::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void PartyMemberGeoPosition::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void PartyMemberGeoPosition::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void PartyMemberGeoPosition::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
