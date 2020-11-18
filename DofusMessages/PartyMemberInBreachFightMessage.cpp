#include "PartyMemberInBreachFightMessage.h"
#include "AbstractPartyMemberInFightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PartyMemberInBreachFightMessage::deserialize(CustomDataInput *input) {
    AbstractPartyMemberInFightMessage::deserialize(input);
    this->_floorFunc(input);
    this->_roomFunc(input);
}

void PartyMemberInBreachFightMessage::_floorFunc(CustomDataInput *input) {
    this->floor = input->readVarUhInt();
    if (this->floor < 0) {

    }
}

void PartyMemberInBreachFightMessage::_roomFunc(CustomDataInput *input) {
    this->room = input->readByte();
    if (this->room < 0) {

    }
}
