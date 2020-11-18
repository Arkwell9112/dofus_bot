#include "PartyJoinMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyMemberInformations.h"

#include "../DofusTypes/PartyGuestInformations.h"

void PartyJoinMessage::deserialize(CustomDataInput *input) {
    unsigned int _id4 = 0;
    PartyMemberInformations _item4;
    PartyGuestInformations _item5;
    AbstractPartyMessage::deserialize(input);
    this->_partyTypeFunc(input);
    this->_partyLeaderIdFunc(input);
    this->_maxParticipantsFunc(input);
    unsigned int _membersLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _membersLen; _i4++) {
        _id4 = input->readUnsignedShort();
        _item4 = *dynamic_cast<PartyMemberInformations *>(ProtocolTypeManager::getInstance(_id4, input));
        ProtocolTypeManager::deleteLastInstance();

        this->members.push_back(_item4);
    }
    unsigned int _guestsLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _guestsLen; _i5++) {
        _item5.deserialize(input);
        this->guests.push_back(_item5);
    }
    this->_restrictedFunc(input);
    this->_partyNameFunc(input);
}

void PartyJoinMessage::_partyTypeFunc(CustomDataInput *input) {
    this->partyType = input->readByte();
    if (this->partyType < 0) {

    }
}

void PartyJoinMessage::_partyLeaderIdFunc(CustomDataInput *input) {
    this->partyLeaderId = input->readVarUhLong();
    if (this->partyLeaderId < 0 || this->partyLeaderId > 9007199254740990) {

    }
}

void PartyJoinMessage::_maxParticipantsFunc(CustomDataInput *input) {
    this->maxParticipants = input->readByte();
    if (this->maxParticipants < 0) {

    }
}

void PartyJoinMessage::_membersFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    PartyMemberInformations _item;
    _item.deserialize(input);
    this->members.push_back(_item);
}

void PartyJoinMessage::_restrictedFunc(CustomDataInput *input) {
    this->restricted = input->readBoolean();
}

void PartyJoinMessage::_partyNameFunc(CustomDataInput *input) {
    this->partyName = input->readUTF();
}
