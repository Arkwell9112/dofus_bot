#include "AbstractPartyMessage.h"
#include "AbstractPartyMemberInFightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractPartyMemberInFightMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMessage::deserialize(input);
    this->_reasonFunc(input);
    this->_memberIdFunc(input);
    this->_memberAccountIdFunc(input);
    this->_memberNameFunc(input);
    this->_fightIdFunc(input);
    this->_timeBeforeFightStartFunc(input);
}

void AbstractPartyMemberInFightMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}

void AbstractPartyMemberInFightMessage::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readVarUhLong();
    if (this->memberId < 0 || this->memberId > 9007199254740990) {

    }
}

void AbstractPartyMemberInFightMessage::_memberAccountIdFunc(CustomDataInput *input) {
    this->memberAccountId = input->readInt();
    if (this->memberAccountId < 0) {

    }
}

void AbstractPartyMemberInFightMessage::_memberNameFunc(CustomDataInput *input) {
    this->memberName = input->readUTF();
}

void AbstractPartyMemberInFightMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void AbstractPartyMemberInFightMessage::_timeBeforeFightStartFunc(CustomDataInput *input) {
    this->timeBeforeFightStart = input->readVarShort();
}
