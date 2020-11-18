#include "PartyInvitationMessage.h"
#include "AbstractPartyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyInvitationMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_partyTypeFunc(input);
    this->_partyNameFunc(input);
    this->_maxParticipantsFunc(input);
    this->_fromIdFunc(input);
    this->_fromNameFunc(input);
    this->_toIdFunc(input);
}

void PartyInvitationMessage::_partyTypeFunc(CustomDataInput *input) {
    this->partyType = input->readByte();
    if (this->partyType < 0) {

    }
}

void PartyInvitationMessage::_partyNameFunc(CustomDataInput *input) {
    this->partyName = input->readUTF();
}

void PartyInvitationMessage::_maxParticipantsFunc(CustomDataInput *input) {
    this->maxParticipants = input->readByte();
    if (this->maxParticipants < 0) {

    }
}

void PartyInvitationMessage::_fromIdFunc(CustomDataInput *input) {
    this->fromId = input->readVarUhLong();
    if (this->fromId < 0 || this->fromId > 9007199254740990) {

    }
}

void PartyInvitationMessage::_fromNameFunc(CustomDataInput *input) {
    this->fromName = input->readUTF();
}

void PartyInvitationMessage::_toIdFunc(CustomDataInput *input) {
    this->toId = input->readVarUhLong();
    if (this->toId < 0 || this->toId > 9007199254740990) {

    }
}
