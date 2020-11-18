#include "MonsterInGroupLightInformations.h"
#include "BreachBranch.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachBranch::deserialize(CustomDataInput *input) {
    MonsterInGroupLightInformations _item3;
    MonsterInGroupLightInformations _item7;
    this->_roomFunc(input);
    this->_elementFunc(input);
    unsigned int _bossesLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _bossesLen; _i3++) {
        _item3.deserialize(input);
        this->bosses.push_back(_item3);
    }
    this->_mapFunc(input);
    this->_scoreFunc(input);
    this->_relativeScoreFunc(input);
    unsigned int _monstersLen = input->readUnsignedShort();
    for (unsigned int _i7 = 0; _i7 < _monstersLen; _i7++) {
        _item7.deserialize(input);
        this->monsters.push_back(_item7);
    }
}

void BreachBranch::_roomFunc(CustomDataInput *input) {
    this->room = input->readByte();
    if (this->room < 0) {

    }
}

void BreachBranch::_elementFunc(CustomDataInput *input) {
    this->element = input->readInt();
    if (this->element < 0) {

    }
}

void BreachBranch::_mapFunc(CustomDataInput *input) {
    this->map = input->readDouble();
    if (this->map < 0 || this->map > 9007199254740990) {

    }
}

void BreachBranch::_scoreFunc(CustomDataInput *input) {
    this->score = input->readShort();
}

void BreachBranch::_relativeScoreFunc(CustomDataInput *input) {
    this->relativeScore = input->readShort();
}
