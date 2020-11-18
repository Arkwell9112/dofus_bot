#include "PlayerStatus.h"
#include "PartyGuestInformations.h"
#include "PartyEntityBaseInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyGuestInformations::deserialize(CustomDataInput *input) {
    PartyEntityBaseInformation _item8;
    this->_guestIdFunc(input);
    this->_hostIdFunc(input);
    this->_nameFunc(input);
    this->guestLook.deserialize(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    unsigned int _id7 = input->readUnsignedShort();
    this->status = *dynamic_cast<PlayerStatus *>(ProtocolTypeManager::getInstance(_id7, input));
    ProtocolTypeManager::deleteLastInstance();

    unsigned int _entitiesLen = input->readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _entitiesLen; _i8++) {
        _item8.deserialize(input);
        this->entities.push_back(_item8);
    }
}

void PartyGuestInformations::_guestIdFunc(CustomDataInput *input) {
    this->guestId = input->readVarUhLong();
    if (this->guestId < 0 || this->guestId > 9007199254740990) {

    }
}

void PartyGuestInformations::_hostIdFunc(CustomDataInput *input) {
    this->hostId = input->readVarUhLong();
    if (this->hostId < 0 || this->hostId > 9007199254740990) {

    }
}

void PartyGuestInformations::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void PartyGuestInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}

void PartyGuestInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}
