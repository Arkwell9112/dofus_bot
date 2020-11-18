#include "SequenceEndMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SequenceEndMessage::deserialize(CustomDataInput *input) {
    this->_actionIdFunc(input);
    this->_authorIdFunc(input);
    this->_sequenceTypeFunc(input);
}

void SequenceEndMessage::_actionIdFunc(CustomDataInput *input) {
    this->actionId = input->readVarUhShort();
    if (this->actionId < 0) {

    }
}

void SequenceEndMessage::_authorIdFunc(CustomDataInput *input) {
    this->authorId = input->readDouble();
    if (this->authorId < -9007199254740990 || this->authorId > 9007199254740990) {

    }
}

void SequenceEndMessage::_sequenceTypeFunc(CustomDataInput *input) {
    this->sequenceType = input->readByte();
}
