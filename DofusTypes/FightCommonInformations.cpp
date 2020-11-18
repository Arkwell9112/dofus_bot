#include "FightTeamInformations.h"
#include "FightOptionsInformations.h"
#include "FightCommonInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightCommonInformations::deserialize(CustomDataInput *input) {
    unsigned int _id3 = 0;
    FightTeamInformations _item3;
    unsigned int _val4 = 0;
    FightOptionsInformations _item5;
    this->_fightIdFunc(input);
    this->_fightTypeFunc(input);
    unsigned int _fightTeamsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _fightTeamsLen; _i3++) {
        _id3 = input->readUnsignedShort();
        _item3 = *dynamic_cast<FightTeamInformations *>(ProtocolTypeManager::getInstance(_id3, input));
        ProtocolTypeManager::deleteLastInstance();

        this->fightTeams.push_back(_item3);
    }
    unsigned int _fightTeamsPositionsLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _fightTeamsPositionsLen; _i4++) {
        _val4 = input->readVarUhShort();
        if (_val4 < 0 || _val4 > 559) {

        }
        this->fightTeamsPositions.push_back(_val4);
    }
    unsigned int _fightTeamsOptionsLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _fightTeamsOptionsLen; _i5++) {
        _item5.deserialize(input);
        this->fightTeamsOptions.push_back(_item5);
    }
}

void FightCommonInformations::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void FightCommonInformations::_fightTypeFunc(CustomDataInput *input) {
    this->fightType = input->readByte();
    if (this->fightType < 0) {

    }
}

void FightCommonInformations::_fightTeamsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    FightTeamInformations _item;
    _item.deserialize(input);
    this->fightTeams.push_back(_item);
}

void FightCommonInformations::_fightTeamsPositionsFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0 || _val > 559) {

    }
    this->fightTeamsPositions.push_back(_val);
}
