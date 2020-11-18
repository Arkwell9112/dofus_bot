#include "NamedPartyTeam.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NamedPartyTeam::deserialize(CustomDataInput *input) {
    this->_teamIdFunc(input);
    this->_partyNameFunc(input);
}

void NamedPartyTeam::_teamIdFunc(CustomDataInput *input) {
    this->teamId = input->readByte();
    if (this->teamId < 0) {

    }
}

void NamedPartyTeam::_partyNameFunc(CustomDataInput *input) {
    this->partyName = input->readUTF();
}
