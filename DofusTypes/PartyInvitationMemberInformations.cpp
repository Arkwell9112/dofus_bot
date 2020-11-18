#include "PartyInvitationMemberInformations.h"
#include "PartyEntityBaseInformation.h"
#include "CharacterBaseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationMemberInformations::deserialize(CustomDataInput *input) {
    PartyEntityBaseInformation _item5;
    CharacterBaseInformations::deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    unsigned int _entitiesLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _entitiesLen; _i5++) {
        _item5.deserialize(input);
        this->entities.push_back(_item5);
    }
}

void PartyInvitationMemberInformations::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void PartyInvitationMemberInformations::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void PartyInvitationMemberInformations::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void PartyInvitationMemberInformations::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
