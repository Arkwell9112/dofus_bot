#include "AllianceVersatileInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceVersatileInformations::deserialize(CustomDataInput *input) {
    this->_allianceIdFunc(input);
    this->_nbGuildsFunc(input);
    this->_nbMembersFunc(input);
    this->_nbSubareaFunc(input);
}

void AllianceVersatileInformations::_allianceIdFunc(CustomDataInput *input) {
    this->allianceId = input->readVarUhInt();
    if (this->allianceId < 0) {

    }
}

void AllianceVersatileInformations::_nbGuildsFunc(CustomDataInput *input) {
    this->nbGuilds = input->readVarUhShort();
    if (this->nbGuilds < 0) {

    }
}

void AllianceVersatileInformations::_nbMembersFunc(CustomDataInput *input) {
    this->nbMembers = input->readVarUhShort();
    if (this->nbMembers < 0) {

    }
}

void AllianceVersatileInformations::_nbSubareaFunc(CustomDataInput *input) {
    this->nbSubarea = input->readVarUhShort();
    if (this->nbSubarea < 0) {

    }
}
