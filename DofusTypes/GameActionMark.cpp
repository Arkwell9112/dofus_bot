#include "GameActionMarkedCell.h"
#include "GameActionMark.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionMark::deserialize(CustomDataInput *input) {
    GameActionMarkedCell _item8;
    this->_markAuthorIdFunc(input);
    this->_markTeamIdFunc(input);
    this->_markSpellIdFunc(input);
    this->_markSpellLevelFunc(input);
    this->_markIdFunc(input);
    this->_markTypeFunc(input);
    this->_markimpactCellFunc(input);
    unsigned int _cellsLen = input->readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _cellsLen; _i8++) {
        _item8.deserialize(input);
        this->cells.push_back(_item8);
    }
    this->_activeFunc(input);
}

void GameActionMark::_markAuthorIdFunc(CustomDataInput *input) {
    this->markAuthorId = input->readDouble();
    if (this->markAuthorId < -9007199254740990 || this->markAuthorId > 9007199254740990) {

    }
}

void GameActionMark::_markTeamIdFunc(CustomDataInput *input) {
    this->markTeamId = input->readByte();
    if (this->markTeamId < 0) {

    }
}

void GameActionMark::_markSpellIdFunc(CustomDataInput *input) {
    this->markSpellId = input->readInt();
    if (this->markSpellId < 0) {

    }
}

void GameActionMark::_markSpellLevelFunc(CustomDataInput *input) {
    this->markSpellLevel = input->readShort();
    if (this->markSpellLevel < 1 || this->markSpellLevel > 32767) {

    }
}

void GameActionMark::_markIdFunc(CustomDataInput *input) {
    this->markId = input->readShort();
}

void GameActionMark::_markTypeFunc(CustomDataInput *input) {
    this->markType = input->readByte();
}

void GameActionMark::_markimpactCellFunc(CustomDataInput *input) {
    this->markimpactCell = input->readShort();
    if (this->markimpactCell < -1 || this->markimpactCell > 559) {

    }
}

void GameActionMark::_activeFunc(CustomDataInput *input) {
    this->active = input->readBoolean();
}
