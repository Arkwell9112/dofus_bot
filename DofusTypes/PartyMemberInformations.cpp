#include "PlayerStatus.h"
#include "PartyMemberInformations.h"
#include "PartyEntityBaseInformation.h"
#include "CharacterBaseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyMemberInformations::deserialize(CustomDataInput *input) {
    unsigned int _id12 = 0;
    PartyEntityBaseInformation _item12;
    CharacterBaseInformations::deserialize(input);
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
    this->_prospectingFunc(input);
    this->_regenRateFunc(input);
    this->_initiativeFunc(input);
    this->_alignmentSideFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    unsigned int _id11 = input->readUnsignedShort();
    this->status = *dynamic_cast<PlayerStatus *>(ProtocolTypeManager::getInstance(_id11, input));
    ProtocolTypeManager::deleteLastInstance();

    unsigned int _entitiesLen = input->readUnsignedShort();
    for (unsigned int _i12 = 0; _i12 < _entitiesLen; _i12++) {
        _id12 = input->readUnsignedShort();
        _item12 = *dynamic_cast<PartyEntityBaseInformation *>(ProtocolTypeManager::getInstance(_id12, input));
        ProtocolTypeManager::deleteLastInstance();

        this->entities.push_back(_item12);
    }
}

void PartyMemberInformations::_lifePointsFunc(CustomDataInput *input) {
    this->lifePoints = input->readVarUhInt();
    if (this->lifePoints < 0) {

    }
}

void PartyMemberInformations::_maxLifePointsFunc(CustomDataInput *input) {
    this->maxLifePoints = input->readVarUhInt();
    if (this->maxLifePoints < 0) {

    }
}

void PartyMemberInformations::_prospectingFunc(CustomDataInput *input) {
    this->prospecting = input->readVarUhShort();
    if (this->prospecting < 0) {

    }
}

void PartyMemberInformations::_regenRateFunc(CustomDataInput *input) {
    this->regenRate = input->readUnsignedByte();
    if (this->regenRate < 0 || this->regenRate > 255) {

    }
}

void PartyMemberInformations::_initiativeFunc(CustomDataInput *input) {
    this->initiative = input->readVarUhShort();
    if (this->initiative < 0) {

    }
}

void PartyMemberInformations::_alignmentSideFunc(CustomDataInput *input) {
    this->alignmentSide = input->readByte();
}

void PartyMemberInformations::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void PartyMemberInformations::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}

void PartyMemberInformations::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void PartyMemberInformations::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PartyMemberInformations::_entitiesFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    PartyEntityBaseInformation _item;
    _item.deserialize(input);
    this->entities.push_back(_item);
}
