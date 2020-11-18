#include "BasicWhoIsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AbstractSocialGroupInfos.h"

void BasicWhoIsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id10 = 0;
    AbstractSocialGroupInfos _item10;
    this->deserializeByteBoxes(input);
    this->_positionFunc(input);
    this->_accountNicknameFunc(input);
    this->_accountIdFunc(input);
    this->_playerNameFunc(input);
    this->_playerIdFunc(input);
    this->_areaIdFunc(input);
    this->_serverIdFunc(input);
    this->_originServerIdFunc(input);
    unsigned int _socialGroupsLen = input->readUnsignedShort();
    for (unsigned int _i10 = 0; _i10 < _socialGroupsLen; _i10++) {
        _id10 = input->readUnsignedShort();
        _item10 = *dynamic_cast<AbstractSocialGroupInfos *>(ProtocolTypeManager::getInstance(_id10, input));
        ProtocolTypeManager::deleteLastInstance();

        this->socialGroups.push_back(_item10);
    }
    this->_playerStateFunc(input);
}

void BasicWhoIsMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->self = BooleanByteWrapper::getFlag(_box0, 0);
    this->verbose = BooleanByteWrapper::getFlag(_box0, 1);
}

void BasicWhoIsMessage::_positionFunc(CustomDataInput *input) {
    this->position = input->readByte();
}

void BasicWhoIsMessage::_accountNicknameFunc(CustomDataInput *input) {
    this->accountNickname = input->readUTF();
}

void BasicWhoIsMessage::_accountIdFunc(CustomDataInput *input) {
    this->accountId = input->readInt();
    if (this->accountId < 0) {

    }
}

void BasicWhoIsMessage::_playerNameFunc(CustomDataInput *input) {
    this->playerName = input->readUTF();
}

void BasicWhoIsMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void BasicWhoIsMessage::_areaIdFunc(CustomDataInput *input) {
    this->areaId = input->readShort();
}

void BasicWhoIsMessage::_serverIdFunc(CustomDataInput *input) {
    this->serverId = input->readShort();
}

void BasicWhoIsMessage::_originServerIdFunc(CustomDataInput *input) {
    this->originServerId = input->readShort();
}

void BasicWhoIsMessage::_socialGroupsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    AbstractSocialGroupInfos _item;
    _item.deserialize(input);
    this->socialGroups.push_back(_item);
}

void BasicWhoIsMessage::_playerStateFunc(CustomDataInput *input) {
    this->playerState = input->readByte();
    if (this->playerState < 0) {

    }
}
