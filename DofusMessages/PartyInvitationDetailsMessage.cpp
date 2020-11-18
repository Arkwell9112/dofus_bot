#include "PartyInvitationDetailsMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/PartyInvitationMemberInformations.h"

#include "../DofusTypes/PartyGuestInformations.h"

void PartyInvitationDetailsMessage::deserialize(CustomDataInput *input) {
    unsigned int _id6 = 0;
    PartyInvitationMemberInformations _item6;
    PartyGuestInformations _item7;
    AbstractPartyMessage::deserialize(input);
    this->_partyTypeFunc(input);
    this->_partyNameFunc(input);
    this->_fromIdFunc(input);
    this->_fromNameFunc(input);
    this->_leaderIdFunc(input);
    unsigned int _membersLen = input->readUnsignedShort();
    for (unsigned int _i6 = 0; _i6 < _membersLen; _i6++) {
        _id6 = input->readUnsignedShort();
        _item6 = *dynamic_cast<PartyInvitationMemberInformations *>(ProtocolTypeManager::getInstance(_id6, input));
        ProtocolTypeManager::deleteLastInstance();

        this->members.push_back(_item6);
    }
    unsigned int _guestsLen = input->readUnsignedShort();
    for (unsigned int _i7 = 0; _i7 < _guestsLen; _i7++) {
        _item7.deserialize(input);
        this->guests.push_back(_item7);
    }
}

void PartyInvitationDetailsMessage::_partyTypeFunc(CustomDataInput *input) {
    this->partyType = input->readByte();
    if (this->partyType < 0) {

    }
}

void PartyInvitationDetailsMessage::_partyNameFunc(CustomDataInput *input) {
    this->partyName = input->readUTF();
}

void PartyInvitationDetailsMessage::_fromIdFunc(CustomDataInput *input) {
    this->fromId = input->readVarUhLong();
    if (this->fromId < 0 || this->fromId > 9007199254740990) {

    }
}

void PartyInvitationDetailsMessage::_fromNameFunc(CustomDataInput *input) {
    this->fromName = input->readUTF();
}

void PartyInvitationDetailsMessage::_leaderIdFunc(CustomDataInput *input) {
    this->leaderId = input->readVarUhLong();
    if (this->leaderId < 0 || this->leaderId > 9007199254740990) {

    }
}

void PartyInvitationDetailsMessage::_membersFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    PartyInvitationMemberInformations _item;
    _item.deserialize(input);
    this->members.push_back(_item);
}
