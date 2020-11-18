#include "GuildEmblem.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildEmblem::deserialize(CustomDataInput *input) {
    this->_symbolShapeFunc(input);
    this->_symbolColorFunc(input);
    this->_backgroundShapeFunc(input);
    this->_backgroundColorFunc(input);
}

void GuildEmblem::_symbolShapeFunc(CustomDataInput *input) {
    this->symbolShape = input->readVarUhShort();
    if (this->symbolShape < 0) {

    }
}

void GuildEmblem::_symbolColorFunc(CustomDataInput *input) {
    this->symbolColor = input->readInt();
}

void GuildEmblem::_backgroundShapeFunc(CustomDataInput *input) {
    this->backgroundShape = input->readByte();
    if (this->backgroundShape < 0) {

    }
}

void GuildEmblem::_backgroundColorFunc(CustomDataInput *input) {
    this->backgroundColor = input->readInt();
}
