#include "KohUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BasicAllianceInformations.h"

#include "../DofusTypes/AllianceInformations.h"

void KohUpdateMessage::deserialize(CustomDataInput *input) {
    AllianceInformations _item1;
    unsigned int _val2 = 0;
    unsigned int _val3 = 0;
    unsigned int _val4 = 0;
    BasicAllianceInformations _item5;
    unsigned int _alliancesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alliancesLen; _i1++) {
        _item1.deserialize(input);
        this->alliances.push_back(_item1);
    }
    unsigned int _allianceNbMembersLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _allianceNbMembersLen; _i2++) {
        _val2 = input->readVarUhShort();
        if (_val2 < 0) {

        }
        this->allianceNbMembers.push_back(_val2);
    }
    unsigned int _allianceRoundWeigthLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _allianceRoundWeigthLen; _i3++) {
        _val3 = input->readVarUhInt();
        if (_val3 < 0) {

        }
        this->allianceRoundWeigth.push_back(_val3);
    }
    unsigned int _allianceMatchScoreLen = input->readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _allianceMatchScoreLen; _i4++) {
        _val4 = input->readByte();
        if (_val4 < 0) {

        }
        this->allianceMatchScore.push_back(_val4);
    }
    unsigned int _allianceMapWinnersLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _allianceMapWinnersLen; _i5++) {
        _item5.deserialize(input);
        this->allianceMapWinners.push_back(_item5);
    }
    this->_allianceMapWinnerScoreFunc(input);
    this->_allianceMapMyAllianceScoreFunc(input);
    this->_nextTickTimeFunc(input);
}

void KohUpdateMessage::_allianceNbMembersFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhShort();
    if (_val < 0) {

    }
    this->allianceNbMembers.push_back(_val);
}

void KohUpdateMessage::_allianceRoundWeigthFunc(CustomDataInput *input) {
    unsigned int _val = input->readVarUhInt();
    if (_val < 0) {

    }
    this->allianceRoundWeigth.push_back(_val);
}

void KohUpdateMessage::_allianceMatchScoreFunc(CustomDataInput *input) {
    unsigned int _val = input->readByte();
    if (_val < 0) {

    }
    this->allianceMatchScore.push_back(_val);
}

void KohUpdateMessage::_allianceMapWinnerScoreFunc(CustomDataInput *input) {
    this->allianceMapWinnerScore = input->readVarUhInt();
    if (this->allianceMapWinnerScore < 0) {

    }
}

void KohUpdateMessage::_allianceMapMyAllianceScoreFunc(CustomDataInput *input) {
    this->allianceMapMyAllianceScore = input->readVarUhInt();
    if (this->allianceMapMyAllianceScore < 0) {

    }
}

void KohUpdateMessage::_nextTickTimeFunc(CustomDataInput *input) {
    this->nextTickTime = input->readDouble();
    if (this->nextTickTime < 0 || this->nextTickTime > 9007199254740990) {

    }
}
