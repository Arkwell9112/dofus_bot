#include "FightExternalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightExternalInformations::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_fightTypeFunc(input);
    this->_fightStartFunc(input);
    this->_fightSpectatorLockedFunc(input);
    for (unsigned int _i5 = 0; _i5 < 2; _i5++) {
        this->fightTeams[_i5].deserialize(input);
    }
    for (unsigned int _i6 = 0; _i6 < 2; _i6++) {
        this->fightTeamsOptions[_i6].deserialize(input);
    }
}

void FightExternalInformations::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void FightExternalInformations::_fightTypeFunc(CustomDataInput *input) {
    this->fightType = input->readByte();
    if (this->fightType < 0) {

    }
}

void FightExternalInformations::_fightStartFunc(CustomDataInput *input) {
    this->fightStart = input->readInt();
    if (this->fightStart < 0) {

    }
}

void FightExternalInformations::_fightSpectatorLockedFunc(CustomDataInput *input) {
    this->fightSpectatorLocked = input->readBoolean();
}
