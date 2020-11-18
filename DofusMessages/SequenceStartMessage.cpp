#include "SequenceStartMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SequenceStartMessage::deserialize(CustomDataInput *input) {
    this->_sequenceTypeFunc(input);
    this->_authorIdFunc(input);
}

void SequenceStartMessage::_sequenceTypeFunc(CustomDataInput *input) {
    this->sequenceType = input->readByte();
}

void SequenceStartMessage::_authorIdFunc(CustomDataInput *input) {
    this->authorId = input->readDouble();
    if (this->authorId < -9007199254740990 || this->authorId > 9007199254740990) {

    }
}
